#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	int num1, num2;
	printf("请输入两个整数：\n");
	scanf("%d%d", &num1, &num2);
	while (num1%num2)
	{
		int tmp = num1 % num2;
		num1 = num2;
		num2 = tmp;

	}
	printf("%d\n", num2);
	return 0;
}