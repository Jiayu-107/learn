#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>

void func(int num)
{
    while (num != 0)
    {
        int x = num % 10;
        printf("%d ", x);
        num /= 10;
    }
}

int main()
{
    int num = 0;
    printf("请输入一个非负整数 ");
    scanf("%d", &num);
    func(num);
    return 0;
}