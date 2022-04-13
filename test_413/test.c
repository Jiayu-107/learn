#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
int main()
{
	//交换两个整型变量的值
	int a = 3;
	int b = 5;
	printf("before: a=%d b=%d\n",a,b);

	//1.创建临时变量
	int tmp = 0;
	tmp = a;
	a = b;
	b = tmp;
	printf("after: a=%d b=%d\n",a,b);

	//2.加减法
	a = a + b;
	b = a - b;
	a = a - b;
	printf("after: a=%d b=%d\n", a, b);

	//3.按位异或
	a = a ^ b;
	b = a ^ b;
	a = a ^ b;
	printf("after: a=%d b=%d\n", a, b);
	return 0;
}