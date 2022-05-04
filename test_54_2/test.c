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
	//ʵ��һ���򵥼�����

	int input = 0;
	int x = 0;
	int y = 0;
	int ret = 0;
	//����һ������ָ������
	int (*parr[])(int, int) = { 0,Add,Sub,Mul,Div,Xor };
	do
	{
		menu();
		printf("���������ѡ��:>\n");
		scanf("%d", &input);
		if (input >= 1 && input <= 5)
		{
			printf("����������������:>\n");
			scanf("%d%d", &x, &y);
			ret = parr[input](x, y);
			printf("����� %d\n\n", ret);
		}
		else if (input == 0)
		{
			printf("�˳�\n");
		}
		else
		{
			printf("ѡ�����\n");
		}
		
	} while (input);
	


	return 0;
}