#define _CRT_SECURE_NO_WARNINGS 1

#define SQUARE(X) X*X
//E 和 ( 之间不能有空格
//这才是宏定义

#include<stdio.h>

int main()
{
	//int ret = SQUARE(5);// 预处理之后 int ret = 5 * 5;
	//printf("%d\n", ret);// 25
	
	int ret = (5 + 1);
	printf("%d\n", ret);// 11
	//为什么 
	//因为 宏 不是函数传参那样； 宏只是简单的传值

	return 0;
}