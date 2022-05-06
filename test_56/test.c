#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>

void menu()
{
	printf("**************************\n");
	printf("**1. add          2. sub**\n");
	printf("**3. mul          4. div**\n");
	printf("**5. xor          6.exit**\n");
	printf("**************************\n");
}

int Add(int x, int y)
{
	return x + y;
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

void Calc(int(*pf)(int, int))
{
	int num1 = 0;
	int num2 = 0;
	printf("����������������:>\n");
	scanf("%d%d", &num1, &num2);
	printf("result = %d\n\n", pf(num1, num2));
}

int main()
{
	int input = 0;
	
	do
	{
		menu();
		printf("���������ѡ��:>\n");
		scanf("%d", &input);
	
		switch (input)
		{
		case 0:
			printf("�˳���\n");
			break;
		case 1:
			Calc(Add);
			break;
		case 2:
			Calc(Sub);
			break;
		case 3:
			Calc(Mul);
			break;
		case 4:
			Calc(Div);
			break;
		case 5:
			Calc(Xor);
			break;
		default:
			printf("�������������ѡ��!\n");
			break;


		}

	} while (input);

	return 0;
}