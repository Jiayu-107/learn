#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
int main()
{
	//�����������ͱ�����ֵ
	int a = 3;
	int b = 5;
	printf("before: a=%d b=%d\n",a,b);

	//1.������ʱ����
	int tmp = 0;
	tmp = a;
	a = b;
	b = tmp;
	printf("after: a=%d b=%d\n",a,b);

	//2.�Ӽ���
	a = a + b;
	b = a - b;
	a = a - b;
	printf("after: a=%d b=%d\n", a, b);

	//3.��λ���
	a = a ^ b;
	b = a ^ b;
	a = a ^ b;
	printf("after: a=%d b=%d\n", a, b);
	return 0;
}