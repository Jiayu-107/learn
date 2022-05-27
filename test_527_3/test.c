#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<string.h>
#include<errno.h>

int main()
{
	//打开文件test.txt 以只读方式
	// 
	//相对路径
	//fopen("test.txt", "r");
	//..表示上一级路径
	//.表示当前路径
	//fopen("..\\test.txt", "r");

	//绝对路径
	//fopen("E:\\Project\\C\\test_527_3\\test.txt", "r");

	FILE* pf = fopen("test.txt", "r");
	if (NULL == pf)
	{
		printf("%s\n", strerror(errno));
		return 0;
	}
	//加入到这 就是打开文件成功
	//读文件

	//后面就是关闭文件
	fclose(pf);
	pf = NULL;
	return 0;
}