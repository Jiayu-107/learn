#include<stdio.h>
void zy1(int arr[], int sz)
{
    int i = 0;
    int max = arr[0];
    int min = arr[0];
    for (i = 0; i < sz; i++)
    {
        if (max <= arr[i])
        {
            max = arr[i];
        }
        if (min >= arr[i])
        {
            min = arr[i];
        }
    }
    printf("���������ֵΪ %d\n", max);
    printf("��������СֵΪ %d\n", min);
}

int main()
{
    int arr1[] = { 1, 2, 3, 4, 5 };
    int sz1 = sizeof(arr1) / sizeof(arr1[0]);
    zy1(arr1, sz1); //��һ��һά������������ֵ����Сֵ
    return 0;
}