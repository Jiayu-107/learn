#define _CRT_SECURE_NO_WARNINGS 1

#include<string.h>
#include<stdio.h>
int main()
{
	char password[20] = {0};
    int i;
	for (i = 0; i < 3; i++)
	{
		printf("请输入密码：");
		scanf("%s", password);
		if (strcmp(password,"123456") == 0 )//字符串比较大小应该用 strcmp函数
		{
			printf("登录成功！\n");
			break;
		}
		else
		{
			printf("密码错误！\n");
		}
	}
	if (3 == i)
	{
		printf("三次密码均错误，退出程序\n");
	}
	return 0;
}