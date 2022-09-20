#include"process"

void my_sighandler(int sig)
{
    printf("ok");
    switch(sig)
    {
        case SIGINT:
            printf("yi\n");
        break;
        case SIGSTOP:
            printf("no\n");
        break;
        case SIGQUIT:
            printf("OK\n");
    }
}

int main()
{
    signal(SIGINT,my_sighandler);`
    return 0;
}