#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	//指针数组 - 数组 - 存放指针的数组
	//数组指针 - 指针 - 
	int i = 0;
	int a = 10;
	int b = 20;
	int c = 30;
	int* pa = &a;
	int* pb = &b;
	int* pc = &c;
	printf("%d %d %d\n",*pa,*pb,*pc);
	//整型数组 - 存放整型
	//字符数组 - 存放字符
	//指针数组 - 存放指针
	//int arr[10];//整型数组
	int* arr2[3] = {&a,&b,&c};//指针数组
	for (i = 0; i < 3; i++)
	{
		printf("%d\n",*arr2[i]);
	}
	return 0;
}