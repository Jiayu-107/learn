#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	int a[5] = { 1,2,3,4,5 };
	int* ptr = (int*)(&a + 1); //������ĵ�ַת���� int*���͵ĵ�ַ
	printf("%d %d", *(a + 1), *(ptr - 1));//a��������ʾ���׵�ַ a + 1 �ٽ����� ���Ϊ���� �Ǿ���ָ�� ����ڶ���Ԫ�� Ϊ2
										 //5
	return 0;
}