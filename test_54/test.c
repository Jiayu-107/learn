#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

int Add(int x, int y)
{
	int z = 0;
	z = x + y;
	return z;

}


int main()
{
	int a = 10;
	int b = 20;
	int (*pa)(int, int) = Add;
	printf("%d\n", Add(3, 2));
	printf("%d\n", (*pa)(3, 2));
	printf("%d\n", pa(3, 2));
	//printf("%d\n",*pa(3,2)); //err
	return 0;
}