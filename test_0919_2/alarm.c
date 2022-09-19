#include"process.h"

int main()
{
    alarm(5);
    int r = alarm(3);//软定时器（51）
    while(1);//三秒后会发送一个SIGALARM(默认是TERM终止信号)
    printf("%d\n", r);
}