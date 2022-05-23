#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<stdlib.h>

int main()
{
	//calloc 
	//第一个参数 是指元素个数
	//第二个参数是指每个元素的大小
	//与malloc不同 calloc会将每个元素初始化成0

	int* p = (int*)calloc(10, sizeof(int));
	if (NULL != p)
	{
		int i = 0;
		for (i = 0; i < 5; i++)
		{
			printf("%d ", *(p + i));
		}
	}
	free(p);
	p = NULL;

	return 0;
}