#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
int main()
{
	int num1, num2, num3;
	printf("亲，请输入三个整数：\n");
	scanf_s("%d%d%d",&num1, &num2, &num3);
	//算法实现
	//num1>num2>num3
	if (num1 < num2)
	{
		int tmp = num1;
		num1 = num2;
		num2 = tmp;
	}
	if (num1 < num3)
	{
		int tmp = num1;
		num1 = num3;
		num3 = tmp;
	}
	if (num2 < num3)
	{
		int tmp = num2;
		num2 = num3;
		num3 = tmp;
	}
	printf("%d %d %d\n", num1, num2, num3);
	return 0;
}