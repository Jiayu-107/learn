#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
void func(int** p, int* b)
{
	//p�����ܵ���&main.p *&main.p ==> main.p
	*p = b;
}

int main()
{
	int a = 10;
	int b = 1024;
	int* p = &a;
	func(&p, &b);//�ú�����������Ƹú���ִ����֮��pָ����b
	printf("%d\n", * p);//��ӡ��ֵΪ1024
}
