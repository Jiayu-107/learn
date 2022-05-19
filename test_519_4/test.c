#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>

int check_sys()
{
	union
	{
		int i;
		char c;
	}u;
	u.i = 1;
	return u.c;
	
}

int main()
{
	//判断大小端字节序存储模式

	int ret = check_sys();
	if (1 == ret)
	{
		printf("小端");
	}
	else
	{
		printf("大端");
	}

	return 0;
}