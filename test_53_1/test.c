#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>

int Add(int x, int y)
{
	int z = 0;
	z = x + y;
	return z;
}

int main()
{
	//数组指针 - 是指向数组的指针
	//函数指针 - 是指向函数的指针 - 存放函数的地址一个指针

	int x = 10;
	int y = 20;

	//int arr[10] = { 0 };
	//int(*p)[10] = &arr;

	//printf("%d\n", Add(x, y));
	//&函数名 和 函数名 都是函数的地址
	//printf("%p\n",&Add);
	//printf("%p\n", Add);

	int (*p) (int, int) = Add;//函数指针
	printf("%d\n", (*p)(2, 3));//5
	return 0;
}