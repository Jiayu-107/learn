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
    printf("该数组最大值为 %d\n", max);
    printf("该数组最小值为 %d\n", min);
}

int main()
{
    int arr1[] = { 1, 2, 3, 4, 5 };
    int sz1 = sizeof(arr1) / sizeof(arr1[0]);
    zy1(arr1, sz1); //求一个一维整型数组的最大值和最小值
    return 0;
}