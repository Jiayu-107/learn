#include"process.h"

int main(int argc, char** argv)
{
    //1.打开管道
    int fd = open(argv[1], O_RDONLY);
    if(-1 == fd)
    {
        perror("open fail");
        return -1;
    }
    //2.读管道
    char buf[256] = {0};
    int ret = read(fd,buf,256);
    if(-1 ==ret)
    {
        perror("read error");
        close(fd);
        return -1;
    }
    printf("%s\n", buf);
    //3.关闭管道
    close(fd);

    return 0;
}