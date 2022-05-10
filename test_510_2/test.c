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

int get_diff_count(int num1, int num2)
{
	int tmp = num1 ^ num2;
	return count_bit_one(tmp);
}

int main()
{
	int num1 = 0;
	int num2 = 0;
	printf("������������:>");
	scanf("%d%d", &num1, &num2);
	int count = get_diff_count(num1, num2);
	printf("��ͬλ�ĸ���Ϊ��%d\n", count);

	return 0;
}