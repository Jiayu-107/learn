#include "process.h"

int main()
{
    if(0 == Fork())
    {
        //int r = execl("./sum","sum", "3","4", NULL);
        char *argv[] = {"sum", "3","4", NULL};
        int r = execv("./sum", argv);
        
        if(-1 == r)
        {
            perror("execl fail");
            return -1;
        }
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
