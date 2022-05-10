#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>

int count_bit_one1(int unsigned num)
{
	int count = 0;
	while (num)
	{
		if (1 == num % 2)
		{
			count++;
		}
		num = num / 2;
	}
	return count;
}

int count_bit_one2(int num)
{
	int count = 0;
	int i = 0;
	for (i = 0; i < 32; i++)
	{
		if ((num >> i) & 1 == 1)
		{
			count++;
		}
	}
	return count;
}


int main()
{
	//设计一个函数 求二进制中1的个数（补码）
	int a = 0;
	printf("请输入一个数:>");
	scanf("%d", &a);
	int count1 = count_bit_one1(a);
	int count2 = count_bit_one2(a);

	printf("1的个数为 = %d\n", count1);
	printf("1的个数为 = %d\n", count2);

	//system("pause");//system 系统库函数- 执行系统命令- pause（暂停）
	return 0;
}