#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	int a, b, c;
	a = 5;
	c = ++a;                   // c = 6; a = 6
	b = ++c, c++, ++a, a++;    // c = 8; b = 7; a = 8;  
	b += a++ + c;			   // a = 9; c = 8; b = 7+8+8 = 23;
	printf("a = %d b = %d c = %d\n",a,b,c);
	return 0;
}