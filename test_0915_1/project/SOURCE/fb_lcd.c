#include "fb_lcd.h"

/*lcd 屏幕初始化*/
void *Init_Lcd(int *fd)
{
    //打开帧缓冲
    *fd = open(FB_PATH,O_RDWR);
    if(-1 == *fd)
    {
        perror("open Lcd fail");//打印系统错误信息
        return NULL;
    }

    //映射
    void *plcd = mmap(NULL,800*480*4,PROT_READ|PROT_WRITE,MAP_SHARED,
                  *fd,0);
    if(MAP_FAILED == plcd)
    {
        perror("mmap fail");
        return NULL;
    }
    return plcd;
}

/*解除初始化*/
int Uninit_Lcd(int fd,int *plcd)
{
    munmap(plcd,800*480*4);
    close(fd);
}

/*在屏幕坐标为x y的像素点显示成color*/
int Lcd_Draw_point(int* plcd,int x,int y,int color)
{
	if(x >= 0 && x < 800 && y>= 0 && y < 480)
    {
        *(plcd+800*y+x) = color;
        return 0;
    }
    return -1;
}

/*
    显示一个圆
*/

/*
    显示一个矩形
*/
int Matrix_Display(int x,int y,int w,int h,int color,int *plcd)
{
    //0.判断参数的合法性
	if(plcd == NULL || !(x>=0&&x<800&&y>=0&&y<480)||
    !(w>0&&w<=800&&h>0&&h<=480))
	{
		return -1;
	}
    if(x+w>800 || y+h>480)
    {
        return -1;
    }
    int i,j;
    for(j=y;j<y+h;j++)
    {
        for(i=x;i<x+w;i++)
        {
            if(Lcd_Draw_point(plcd,i,j,color)==-1)
                return -1;
        }
    }
    return 0;
}

/*
	Bmp_display:在屏幕的指定的位置显示bmp图片
	@bmp_file：图片的路径名
	@x0 y0 图片左上角在屏幕上的坐标
	@plcd:帧缓冲映射区域的首地址
	返回值：
		-1 失败
		0  成功
*/
int Bmp_display(const char *bmp_file,int x0,int y0,int *plcd)
{
    //0.判断参数的合法性
	if(plcd == NULL || !(x0>=0&&x0<800&&y0>=0&&y0<480))
	{
		return -1;
	}
	//1.打开图片
	int fd = open(bmp_file,O_RDONLY);
	if(-1 == fd)
	{
		printf("%s",bmp_file);
		perror("open fail");
		return -1;
	}
	//2.判断到底是不是一张bmp图片
	char buf[4]={0};
	read(fd,buf,2);
	if(buf[0]!=0x42 || buf[1]!=0x4D)
	{
		printf("NOT BMP\n");
		close(fd);
		return -1;
	}
	//3.解析图片 宽 高 色深
	lseek(fd,0x12,SEEK_SET);
	read(fd,buf,4);
	int width = buf[3]<<24 | buf[2]<<16 | buf[1]<<8 | buf[0];

	lseek(fd,0x16,SEEK_SET);
	read(fd,buf,4);
	int height = buf[3]<<24 | buf[2]<<16 | buf[1]<<8 | buf[0];

	lseek(fd,0x1c,SEEK_SET);
	read(fd,buf,2);
	short depth = buf[1]<<8 | buf[0];

	if(!(depth == 24 || depth == 32))
	{
		printf("NOT SUPPORT!\n");
		close(fd);
		return -1;
	}

	printf("%s:%d*%d depth:%d\n",bmp_file,width,height,depth);
	//4.获取像素数组
	int line_vaild_bytes=abs(width)*depth/8;
	int line_bytes;//一行总字节数=有效字节数+赖子数
	int laizi = 0;

	if(line_vaild_bytes%4)
	{
		laizi = 4 - line_vaild_bytes%4;
	}
	line_bytes = line_vaild_bytes + laizi;
	int total_bytes = line_bytes*abs(height);//整个像素数组的大小

	//从文件中读取像素数组
	lseek(fd,54,SEEK_SET);
	unsigned char piexl[total_bytes];
	read(fd,piexl,total_bytes);
	//5.在屏幕的对应位置显示即可
	unsigned char a,r,g,b;
	int color;
	int i=0;
	int x,y;
	//遍历整个像素数组
	for(y=0;y<abs(height);y++)
	{
  		for(x=0;x<abs(width);x++)
  		{
			b=piexl[i++];
			g=piexl[i++];
			r=piexl[i++];
    		if(depth==32)
			{
				a=piexl[i++];
			}
    		else
			{
				a=0;//不透明
			}
    		color=a<<24|r<<16|g<<8|b;
    		Lcd_Draw_point(plcd,width>0?x+x0:x0+abs(width)-x-1,
          	height>0?y0+abs(height)-y-1:y0+y,color);
		}
  		//每一行末尾可能存在赖子
  		i+=laizi;
	}
	close(fd);
	return 0;
}

