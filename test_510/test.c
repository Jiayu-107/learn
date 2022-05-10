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
	//���һ������ ���������1�ĸ��������룩
	int a = 0;
	printf("������һ����:>");
	scanf("%d", &a);
	int count1 = count_bit_one1(a);
	int count2 = count_bit_one2(a);

	printf("1�ĸ���Ϊ = %d\n", count1);
	printf("1�ĸ���Ϊ = %d\n", count2);

	//system("pause");//system ϵͳ�⺯��- ִ��ϵͳ����- pause����ͣ��
	return 0;
}