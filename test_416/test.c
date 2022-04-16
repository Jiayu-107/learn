#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	int a = 10;
	int * pa = &a;
	int* * ppa = &pa;//ppa就二级指针
	**ppa = 20;
	printf("%d\n",**ppa);//打印a的值
	printf("%d\n",a);

	return 0;
}