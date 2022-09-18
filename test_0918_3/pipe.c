#include"process.h"

int main()
{
    //创建一个无名管道
    int fd[2];
    Pipe(fd);
    //fd[0] read
    //fd[1] write
    if(0 == Fork())
    {
        //子进程
        //子进程 会拷贝父进程的数据（文件描述符）
        close(fd[1]);
        char buf[256] = {0};
        int ret = read (fd[0], buf, 256);
        if(0 < ret)
        {
            printf("%s\n",buf);
        }
    }
    else
    {   
        close(fd[0]);
        sleep(3);
        char* str = "father here";
        write(fd[1],str,strlen(str)+1);
        sleep(1);
        //exit(0);
    }
    return 0;
}