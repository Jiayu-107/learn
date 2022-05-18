#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>

struct S
{
	char c;
	int i;
	double d;
	char arr[10];
};

void Init(struct S* ps)
{
	ps->c = 'x';
	ps->i = 212;
	ps->d = 3.14;
	ps->arr = "xx";
}

void print1(struct S s)
{
	printf("%c %d %lf %s\n", s.c, s.i, s.d, s.arr);
}

void print2(struct S* tmp)
{
	printf("%c %d %lf\n", tmp->c, tmp->i, tmp->d);
}

int main()
{
	struct S s;
	Init(&s);
	print1(s);
	print2(&s);
	
	return 0;
}