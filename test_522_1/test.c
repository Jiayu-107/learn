#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<errno.h>

int main()
{
	//向内存申请10个整型的空间
	int* p = (int*)malloc(10 * sizeof(int));
	if (NULL == p)
	{
		//打印 错误原因的一个方式
		printf("%s\n", strerror(errno));
	}
	else
	{
		//正常使用空间
		int i = 0;
		for (i = 0; i < 10; i++)
		{
			*(p + i) = i;
			//printf("%d ", *(p + i));
		}

		for (i = 0; i < 10; i++)
		{
			
			printf("%d ", *(p + i));
		}
	}
	//当动态申请的空间不再使用时
	//就应该还给操作系统
	free(p);
	p = NULL;

	//那我在想一件事情 要是写一个程序一直申请内存不返还那不是就可以
	//但是好像程序关闭申请的内存就强制返还给操作系统
	//那我可以写一个不能关闭的程序吗？
	return 0;
}