#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>

#define OFFSETOF(struct_name, member_name) (int)&(((struct_name*)0)->member_name)

struct S
{
	char c1;
	int i;
	char c2;
};

int main()
{
	printf("%d\n", OFFSETOF(struct S, c1));
	printf("%d\n", OFFSETOF(struct S, i));
	return 0;
}