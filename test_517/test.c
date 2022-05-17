#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<string.h>
#include<errno.h>


int main()
{
	//错误码   错误信息
	//0 -     No error
	//1 -	  Operation not permitted
	//2 -     No such file or directory
	//...
	//errno 是一个全局错误码的变量
	//当C语言的 库函数 执行过程中，发生了错误，就会把对应的错误码，赋值到 errno 中
	
	//char* str = strerror(errno);
	//printf("%s\n", str);


	FILE* pf = fopen("test.txt", "r");
	if (pf == NULL)
	{
		printf("%s\n", strerror(errno));
	}
	else
	{
		printf("open file success\n");
	}
	return 0;
}