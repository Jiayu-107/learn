#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<stdlib.h>

struct S
{
	int i;
	int* arr;
};

int main()
{
	struct S* p = (struct S*)malloc(sizeof(struct S));
	p->i = 100;
	p->arr = (int*)malloc(10 * sizeof(int));
	int i = 0;
	for (i = 0; i < 10; i++)
	{
		p->arr[i] = i;
		printf("%d ", p->arr[i]);
	}
	free(p->arr);
	p->arr = NULL;
	free(p);
	p = NULL;
	return 0;
}