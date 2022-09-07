#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
void func(int** p, int* b)
{
	//p所接受到是&main.p *&main.p ==> main.p
	*p = b;
}

int main()
{
	int a = 10;
	int b = 1024;
	int* p = &a;
	func(&p, &b);//该函数请自行设计该函数执行完之后p指向了b
	printf("%d\n", * p);//打印的值为1024
}
