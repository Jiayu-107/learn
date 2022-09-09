#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdio.h>
#include <string.h> 

#define FB_PATH "/dev/fb0"

int Init_Lcd(void)
{
    int fd = open(FB_PATH,O_RDWR);
    if(-1 == fd)
    {
        perror("open Lcd fail");//打印系统错误信息
        return -1;
    }
    return fd;
}

int main()
{
    int fb_fd = Init_Lcd();
    //将整个屏幕显示成红色
    //就是所有的像素点赋值 0xff0000 
    //RGB 标准色 参考RGB颜色对照表(百度)
    unsigned int color[800*480];
    for(int i=0;i<800*480;i++)
        color[i] = 0xFF0000;
    //写入到帧缓冲即可
    int res = write(fb_fd,color,800*480*4);
    if(-1 == res)
    {
        perror("write error");
        return -1;
    }
    else if(0 == res)
    {
        printf("write nothing");
    }

    close(fb_fd);//关闭屏幕
    return 0;
}