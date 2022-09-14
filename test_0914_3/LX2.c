#include<stdio.h>

int func(int arr[],int sz)
{
    if(sz == 1) return 1;
    return (arr[sz-1]>arr[sz-2])&&func(arr,sz-1);
}

int main()
{
    int arr[5] = {1, 2, 3, 4, 5};
    int sz = sizeof(arr) / sizeof(arr[0]);
    func(arr,sz);//用递归方式
              //判断一个一维数组是否递增 不是返回0；是返回1
    if(func(arr,sz))
        printf("该数组是递增数组\n");
    else
        printf("该数组不是递增数组\n");
    return 0;
}