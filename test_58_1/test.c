#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

struct Test
{
	int Num;
	char* pcName;
	short sDate;
	char cha[2];
	short sBa[4];
}*p;
//����p ��ֵΪ0x100000�� ������ʽʽ��ֵ�ֱ�Ϊ���٣�
//��֪���ṹ��Test ���͵Ĵ�С��20���ֽ�
int main()
{
	printf("%p\n", p + 0x1);
	printf("%p\n", (unsigned long)p + 0x1);
	printf("%p\n", (unsigned int*)p + 0x1);

	return 0;
}