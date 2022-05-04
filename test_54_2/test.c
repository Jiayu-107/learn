#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

void menu()
{
	printf("*************************\n");
	printf("**1. Add         2. Sub**\n");
	printf("**3. Mul         4. Div**\n");
	printf("**5. Xor         5.exit**\n");
	printf("*************************\n");
}

int Add(int x, int y)
{
	int z = 0;
	z = x + y;
	return z;
}

int Sub(int x, int y)
{
	return x - y;
}

int Mul(int x, int y)
{
	return x * y;
}

int Div(int x, int y)
{
	return x / y;
}

int Xor(int x, int y)
{
	return x ^ y;
}

int main()
{
	//实现一个简单计算器

	int input = 0;
	int x = 0;
	int y = 0;
	int ret = 0;
	//创建一个函数指针数组
	int (*parr[])(int, int) = { 0,Add,Sub,Mul,Div,Xor };
	do
	{
		menu();
		printf("请做出你的选择:>\n");
		scanf("%d", &input);
		if (input >= 1 && input <= 5)
		{
			printf("请输入两个操作数:>\n");
			scanf("%d%d", &x, &y);
			ret = parr[input](x, y);
			printf("结果是 %d\n\n", ret);
		}
		else if (input == 0)
		{
			printf("退出\n");
		}
		else
		{
			printf("选择错误\n");
		}
		
	} while (input);
	


	return 0;
}