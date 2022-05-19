#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>

//联合类型的声明
union Un
{
	char c;
	int i;
};

union Un1
{
	char c[5];
	int i;
};

union Un2
{
	short c[7];
	int i;
};

int main()
{
	//联合变量的定义
	union Un un;

	//联合变量的赋初值
	un.c = 'x';

	//计算联合变量的大小
	printf("%d\n", sizeof(un));
	printf("%d\n", sizeof(union Un));

	printf("%d\n", sizeof(union Un1));
	printf("%d\n", sizeof(union Un2));


	return 0;
}