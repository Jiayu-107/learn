#include"process.h"

int main()
{
    if(0 == Fork())
    {
        system("./sum 3 4");
        printf("hui bu hui da yin\n");
    }
    else
    {
        wait(NULL);
        printf("father\n");
        //execlp("ls", "ls", "-l", "sum.c",NULL);
        char*argv[] = {"ls", "-l", "sum.c",NULL};
        execvp("ls", argv);
    }

    return 0;
}