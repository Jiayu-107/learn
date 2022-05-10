#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

int count_bit_one(int num)
{
	int count = 0;
	while (num)
	{
		num = num & (num - 1);
		count++;
	}

	return count;
}

int main()
{
	int num = 0;
	printf("请输入一个数:>");
	scanf("%d", &num);
	int count = count_bit_one(num);
	printf("1的个数为：%d\n", count);
	return 0;
}