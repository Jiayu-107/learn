#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	int a = 10;
	int * pa = &a;
	int* * ppa = &pa;//ppa�Ͷ���ָ��
	**ppa = 20;
	printf("%d\n",**ppa);//��ӡa��ֵ
	printf("%d\n",a);

	return 0;
}