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
	int arr[10] = { 0 }; //一个整型数组
	int(*p)[10] = &arr; //一个整型数组指针 - 取出整型数组的地址

	int (*pf)(int, int); //一个函数指针
	int(*pfarr[4])(int, int); //pfarr 是一个数组 - 函数指针数组
	int(*(*ppfarr)[4])(int, int);

	//ppfarr 是一个指向 函数指针数组 的指针
	// 
	//ppfarr 是一个数组指针，指针指向的数组有四个元素
	//指向的数组的每个元素的类型是一个函数指针 int(*)(int, int)
	return 0;
}