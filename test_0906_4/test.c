#include<stdio.h>

void zy3(int arr[][4], int lenth, int width)
{
    int sum = 0;
    for (int i = 0; i < lenth; i++)
    {
        for (int j = 0; j < width; j++)
        {
            sum += arr[i][j];
        }
    }
    printf("%d\n", sum);

}

int main()
{
    int arr2[3][4] = { 1,2,3,4,5,6,7,8,9,10,11,12 };
    int lenth = sizeof(arr2) / sizeof(arr2[0]);
    int width = sizeof(arr2[0]) / sizeof(arr2[0][0]);
    zy3(arr2, lenth, width); //请封装一个函数返回该数组的和
    return 0;
}