#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>

int Add(int x, int y)
{
	int z = 0;
	z = x + y;
	return z;
}

int main()
{
	//����ָ�� - ��ָ�������ָ��
	//����ָ�� - ��ָ������ָ�� - ��ź����ĵ�ַһ��ָ��

	int x = 10;
	int y = 20;

	//int arr[10] = { 0 };
	//int(*p)[10] = &arr;

	//printf("%d\n", Add(x, y));
	//&������ �� ������ ���Ǻ����ĵ�ַ
	//printf("%p\n",&Add);
	//printf("%p\n", Add);

	int (*p) (int, int) = Add;//����ָ��
	printf("%d\n", (*p)(2, 3));//5
	return 0;
}