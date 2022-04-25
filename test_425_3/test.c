#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	int n = 10;
	int m = 100;
	const int* p = &n;
	int* const p = &n;
	//const 放在指针变量的*左边时，修饰的*p，也就是说不能通过*p来改变*p（n）的值；
	//const 放在指针变量的*右边是，修饰的是指针变量p本身，p不能被改变了；
	*p = 0;
	p = &m;
	return 0;
}