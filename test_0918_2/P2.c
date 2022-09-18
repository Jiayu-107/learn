#include"process.h"

int main(int argc, char** argv)
{
    //1.打开管道
    int fd = open(argv[1], O_WRONLY);//不阻塞
    if(-1 == fd)
    {
        perror("open fail");
        return -1;
    }
    //2.xie管道
    char *str = "wo men shi guan jun";
    int ret = write(fd,str,strlen(str)+1);
    if(-1 ==ret)
    {
        perror("write error");
        close(fd);
        return -1;
    }
    //3.关闭管道
    close(fd);

    return 0;
}