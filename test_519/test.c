#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>

//
//λ�� - ������λ
//

struct S
{
	int a : 2;
	int b : 5;
	int c : 10;
	int d : 30;
};
//47bit - 6���ֽ�*8 - 48bit

int main()
{
	struct S s;
	printf("%zd\n", sizeof(s));//8���ֽ�

	return 0;
}