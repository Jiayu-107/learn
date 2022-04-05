#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
    int i= 0 ;
    int n = 0;
    long  int sum =1;
    scanf("%d",&n);//求一个数的阶乘
    for(i=1;i<=n;i++)
    {
        sum = sum * i;
    }
    printf("%d\n",sum);
    return 0;
}