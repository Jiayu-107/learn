#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
void zy2(int arr[], int sz)
{
    int max = arr[0];
    int num = arr[0];
    for (int i = 0; i < sz; i++)
    {
        if (num <= arr[i])
        {
            num = max;
            max = arr[i];
        }
    }
    printf("������ĵڶ���ֵΪ %d\n", num);
}

int main()
{
    int arr1[] = { 1, 2, 3, 4, 5 };
    int sz1 = sizeof(arr1) / sizeof(arr1[0]);
    zy2(arr1, sz1);//ֻ����һ���������������ĵڶ���Ԫ��
    return 0;
}