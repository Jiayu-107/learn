#include"process.h"

int main()
{
    pid_t pid = Fork();
    if(0 == pid)
    {
        //子进程
        //printf("child pid=%d   father pid=%d\n", pid, getppid());
        printf("child pid=%d   father pid=%d\n", getpid(), getppid());
    }
    else
    {
        //父进程
        //printf("child pid=%d   myself pid=%d\n", getpid(), pid);
        printf("child pid=%d   myself pid=%d\n", pid,getpid());
    }
    return 0;

}