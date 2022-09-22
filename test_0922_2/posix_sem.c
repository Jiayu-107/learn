#include<stdio.h>
#include<fcntl.h>
#include<sys/stat.h>
#include<semaphore.h>
#include"process.h"
int main()
{
    sem_t* sem = sem_open("/test.sem", O_CREAT,0664,0);
    if(sem == SEM_FAILED)
    {
        perror("sem_open fail");
        return -1;
    }
    if(0 == Fork())//子进程
    {
        printf("child\n");
        //子进程V操作
        int r = sem_post(sem);
        if(-1 == r)
        {
            perror("sem_post fail");
            return -1;
        }
    }
    else
    {
        int r = sem_wait(sem);
        if(-1 == r)
        {
            perror("sem_wait fail");
            return -1;
        }
        printf("father\n");
    }
    
    return 0;
}