#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

//大端（存储）模式，是指数据的低位保存在内存的高地址中，而数据的高位保存再内存的低地址中；
//小端（存储）模式，是指数据的低位保存在呢村的低地址中，而数据的高位保存在内存的高地址中；

int check_sys()
{
	int a = 0x00000001;
	char* p = &a;
	if (*p = 1)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}

int main()
{
	//写一段代码告诉我们当前机器的字节序是什么
	//返回1，小端
	//返回0，大端
	int ret = check_sys();
	if (ret == 1)
	{
		printf("小端\n");
	}
	else
	{
		printf("大端\n");
	}
	
	return 0;
}