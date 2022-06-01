#define _CRT_SECURE_NO_WARNINGS 1
#define CAT(X, Y) X##Y

#include<stdio.h>

int main()
{
	int Class84 = 2019;
	printf("%d\n", Class84);
	printf("%d\n", CAT(Class, 84));
	return 0;
}