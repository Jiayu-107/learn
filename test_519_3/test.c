#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>

//�������͵�����
union Un
{
	char c;
	int i;
};

union Un1
{
	char c[5];
	int i;
};

union Un2
{
	short c[7];
	int i;
};

int main()
{
	//���ϱ����Ķ���
	union Un un;

	//���ϱ����ĸ���ֵ
	un.c = 'x';

	//�������ϱ����Ĵ�С
	printf("%d\n", sizeof(un));
	printf("%d\n", sizeof(union Un));

	printf("%d\n", sizeof(union Un1));
	printf("%d\n", sizeof(union Un2));


	return 0;
}