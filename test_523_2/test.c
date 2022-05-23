#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<errno.h>
#include<assert.h>

int main()
{
	int*  p1 = (int*)malloc(5 * sizeof(int));
	if (NULL == p1)
	{
		printf("%s\n", strerror(errno));
	}
	else
	{
		int i = 0;
		for (i = 0; i < 5; i++)
		{
			*(p1 + i) = i;
			printf("%d ", *(p1 + i));
		}
	}
	//但是空间不够用 怎么办呢
	//找 realloc 函数


	//就是在使用 malloc 开辟的20个字节空间
	//假设这里，20个字节不能满足我们使用了
	//希望我们能够有40个字节的空间
	//这里我么就可以使用 relloc 来调整动态开辟的内存
	//
	//realloc 使用的注意事项：
	//1.如果p1指向的空间之后有足够的内存空间可以追加，则直接追加，后返回p1
	//2.如果p1指向的空间之后没有足够的内存空间可以追加，则realloc函数会重新找一块新的内存区域
	//  开辟一块满足需求的空间，并且把原来内存中的数据拷贝过来，释放旧的内存空间
	//  最后返回新开辟的内存地址
	//3.得用一个新的变量来姐搜realloc函数的返回值
	int* p2 = (int*)realloc(p1, 10 * sizeof(int));
	if (NULL != p2)
	{
		p1 = p2;
		int i = 0;
		for (i = 5; i < 10; i++)
		{
			*(p1 + i) = i+1;
			printf("%d ", *(p1 + i));
		}
	}

	//依然要释放内存 不用之后
	free(p1);
	p1 = NULL;

	return 0;
}