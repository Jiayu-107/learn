#include"process.h"

void my_sighandler()
{
    ;
}

int main()
{
    pid_t pid = Fork();
    if(0 == pid)//子进程
    {
        signal(SIGINT,my_sighandler);
        pause();
        printf("ba gei de tai shao le\n");
    }
    else
    {
        printf("fa sheng huo fei");
        sleep(1);
        kill(pid,SIGINT);
        wait(NULL);
        printf("ni ge wu ni zi");
    }

}