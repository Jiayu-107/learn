#include <stdio.h>
#include <fcntl.h> 
#include <unistd.h>
#include <termios.h> 
#include <stdlib.h>
#include <netdb.h>
#include <string.h>
#include <errno.h>
//6818串口所对应的文件名
#define COM2 "/dev/ttySAC1"
#define COM3 "/dev/ttySAC2"
#define COM4 "/dev/ttySAC3"
/* 设置串口参数（初始化串口） */
void init_tty(int fd)
{    
	//声明设置串口的结构体
	struct termios termios_new;
	//先清空该结构体
	bzero( &termios_new, sizeof(termios_new));
	//	cfmakeraw()设置终端属性，就是设置termios结构中的各个参数。
	cfmakeraw(&termios_new);
	//设置波特率
	//termios_new.c_cflag=(B9600);
	cfsetispeed(&termios_new, B9600);
	cfsetospeed(&termios_new, B9600);
	//CLOCAL和CREAD分别用于本地连接和接受使能，因此，首先要通过位掩码的方式激活这两个选项。    
	termios_new.c_cflag |= CLOCAL | CREAD;
	//通过掩码设置数据位为8位
	termios_new.c_cflag &= ~CSIZE;
	termios_new.c_cflag |= CS8; 
	//设置无奇偶校验
	termios_new.c_cflag &= ~PARENB;
	//一位停止位
	termios_new.c_cflag &= ~CSTOPB;
	tcflush(fd,TCIFLUSH);
	// 可设置接收字符和等待时间，无特殊要求可以将其设置为0
	termios_new.c_cc[VTIME] = 10;
	termios_new.c_cc[VMIN] = 1;
	// 用于清空输入/输出缓冲区
    	tcflush (fd, TCIFLUSH);
	//完成配置后，可以使用以下函数激活串口设置
	if(tcsetattr(fd,TCSANOW,&termios_new) )
		printf("Setting the serial1 failed!\n");

}

//烟雾传感器 
int ZMQ01SensorUpdate()
{
	int ttyfd = open(COM2,O_RDWR);
	if(ttyfd==-1)
	{
		perror("open com2 failed");
		return -1; 
	} 
	init_tty(ttyfd);
	unsigned char wbuf[9] = {0xff,0x01,0x86,0,0,0,0,0,0x79};
	unsigned char rbuf[9];
	short int y;
	int r;
	r = write(ttyfd,wbuf,9);
	if(r!=9){
		sleep(1);
		return -1;
	}
	r= read(ttyfd,rbuf,9);
	if(rbuf[0]==0xff&&rbuf[1]==0x86){
		y = rbuf[2]<<8|rbuf[3];
		printf("Smoke = %hd\n",y);
	}
	close(ttyfd);
	return y;
 } 
 

 
//GY39传感器  
int * GY39SensorUpdate()
{
	static int gy39[5]; 
	int ttyfd = open(COM4,O_RDWR);
	if(ttyfd==-1)
	{
		perror("open com4 failed");
	} 
	init_tty(ttyfd);
	unsigned char wbuf1[3] = {0xa5,0x81,0x26};
	unsigned char wbuf2[3] = {0xa5,0x82,0x27};
	unsigned char rbuf1[9];
	unsigned char rbuf2[15];
	int l,t,hum,p,h;
	int r1,r2;	
	r1 = write(ttyfd,wbuf1,3);
	if(r1!=3){
		sleep(1);
	}
	read(ttyfd,rbuf1,9);
	if(rbuf1[0]==0x5a&&rbuf1[1]==0x5a&&rbuf1[2]==0x15){
		//光照强度 
		l = rbuf1[4]<<24 | rbuf1[5]<<16 | rbuf1[6]<<8 | rbuf1[7];
		l = l/10;
		gy39[0] = l;
		printf("light = %d lux\n",l);
	}
	/////////////////////////////////
	r2 = write(ttyfd,wbuf2,3);
	if(r2!=3){
		sleep(1);
	}
	read(ttyfd,rbuf2,15);
	if(rbuf2[0]==0x5a&&rbuf2[1]==0x5a&&rbuf2[2]==0x45){
		//温度 
		t = rbuf2[4]<<8 | rbuf2[5];
		t = t/100;
		gy39[1] = t;
		//气压
		p = rbuf2[6]<<24 | rbuf2[7]<<16 | rbuf2[8]<<8 | rbuf2[9];
		p = p/100;
		gy39[2] = p;
		//湿度 
		hum =rbuf2[10]<<8 | rbuf2[11];
		hum= hum/100;
		gy39[3] = hum;
		//海拔
	    h = rbuf2[12]<<8 | rbuf2[13];
	    gy39[4] = h;
		printf("T = %d \nP = %d Pa\nHum = %d \nh = %d m\n",t,p,hum,h);
	}
	close(ttyfd);
	return gy39;
 } 
 
 
