#include<iostream>
#include<pthread.h>
#include<unistd.h>

using namespace std;

struct parameter
{
    char a;
    int i;
    float f;
}

void* thread_function(void* arg)
{
    struct parameter* p = (parameter*)arg;
    cout<<p->a<<endl;
    cout<<p->i<<endl;
    cout<<p->j<<endl;

    return ((void*)0);
}

int main()
{
    pthread_t pid;
    struct parameter* par = new parameter;
    par->a = 'c';
    par->i = 2;
    par->f = 3.14;
    pthread_create(&pid,NULL,thread_function,(void*)par);
    sleep(1);
    return 0;
}