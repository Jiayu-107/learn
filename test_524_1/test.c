#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<stdlib.h>
#include<assert.h>

struct S
{
	int i;
	int arr[];//未知大小的-柔性数组成员-数组的大小是可以调整的
};

//struct S
//{
//	int i;
//	int arr[0];
//};


int main()
{
	//struct S s;
	//printf("%d\n", sizeof(s));//4

	struct S* ps = (struct S*)malloc(sizeof(struct S) + 5 * sizeof(int));
	assert(ps != NULL);
	ps->i = 100;

	int i = 0;
	for (i = 0; i < 5; i++)
	{
		ps->arr[i] = i;//0 1 2 3 4
		printf("%d ", ps->arr[i]);
	}
	struct S* ptr = realloc(ps, 44);
	if (ptr != NULL)
	{
		ps = ptr;
	}

	return 0;
}