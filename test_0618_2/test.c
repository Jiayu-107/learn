#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
int main()
{
    int a, b;
    a = 077;
    b = a ^ 3;
    printf("b ��ֵΪ %d \n", b);
    b ^= 7;
    printf("b ��ֵΪ %d \n", b);
    return 0;
}