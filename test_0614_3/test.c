#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#define N 3
int main()
{
    int i, j, a[N][N], sum = 0;
    printf("���������(3*3)��\n");
    for (i = 0; i < N; i++)
        for (j = 0; j < N; j++)
            scanf("%d", &a[i][j]);
    for (i = 0; i < N; i++)
        sum += a[i][i];
    printf("�Խ���֮��Ϊ��%d\n", sum);
    return 0;
}