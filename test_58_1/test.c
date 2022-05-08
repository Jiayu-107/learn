#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

struct Test
{
	int Num;
	char* pcName;
	short sDate;
	char cha[2];
	short sBa[4];
}*p;
//假设p 的值为0x100000。 下面表达式式的值分别为多少？
//已知，结构体Test 类型的大小是20个字节
int main()
{
	printf("%p\n", p + 0x1);
	printf("%p\n", (unsigned long)p + 0x1);
	printf("%p\n", (unsigned int*)p + 0x1);

	return 0;
}