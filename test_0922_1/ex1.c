#include<stdio.h>
#include<pthread.h>

void* my_pthread(void* arg)
{
    printf("%s\n", (char*)arg);
}

int main()
{
    char* str = "他带她海边看花";
    pthread_t tid;
    pthread_create(&tid,NULL,my_pthread,(void*)str);
    while(1)
    {
        printf("悟已往之不谏\n");
    }
    
    return 0;
}