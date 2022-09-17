#include"process.h"

int main()
{
    int x = 1;
    pid_t pid = Fork();
    if(pid == 0)
    {
        printf("p1: x = %d\n", x);
    }
    printf("p2: x = %d\n", x);

    //子进程和父进程分别输出什么

    return 0;
}