#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>

struct S
{
	char a : 3;
	char b : 4;
	char c : 5;
	char d : 4;

};

int main()
{
	//空间是如何开辟的
	//

	struct S s = { 0 };

	s.a = 10;
	s.b = 12;
	s.c = 3;
	s.d = 4;

	printf("%d\n", sizeof(struct S));
	printf("%d\n", sizeof(s));


	return 0;
}