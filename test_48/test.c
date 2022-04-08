#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main()
{
	//设置一个关机程序；
	char input[20] = { 0 };
	system("shutdown -s -t 60");
	while (1)
	{
		printf("请注意！你的计算机将于一分钟后关机，如果输入：“我是傻得” 就取消关机。\n请输入：");
		scanf("%s", input);
		if (strcmp(input, "我是傻得") == 0)
		{
			system("shutdown -a");
			break;
		}
	}
	return 0;
}