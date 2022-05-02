#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	int arr1[10] = { 1,2,3,4,5,6,7,8,9,10 };
	//int* p = arr1;//数组名就是首元素地址，一般情况下
	int(*p)[10] = &arr1;//这是一个整型数组指针

	
	int i = 0;
	/*for (i = 0; i < 10; i++)
	{
		printf("%d ", arr1[i]);
	}
	printf("n");*/

	/*for (i = 0; i < 10; i++)
	{
		printf("%d ", (*p)[i]);
	}*/

	for (i = 0; i < 10; i++)
	{
		printf("%d ", *(*p + i));// *p = arr
	}

	return 0;
}