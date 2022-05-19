#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>

//
//位段 - 二进制位
//

struct S
{
	int a : 2;
	int b : 5;
	int c : 10;
	int d : 30;
};
//47bit - 6个字节*8 - 48bit

int main()
{
	struct S s;
	printf("%zd\n", sizeof(s));//8个字节

	return 0;
}