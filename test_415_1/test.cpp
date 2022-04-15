#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	int arr[10] = {0};
	printf("%p\n",arr);//数组首元素地址
	printf("%p\n", arr+1);

	printf("%p\n", &arr[0]);//数组首元素地址
	printf("%p\n", &arr[0]+1);

	printf("%p\n", &arr);//数组所有元素地址
	printf("%p\n", &arr+1);
	return 0;
}