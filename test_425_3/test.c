#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	int n = 10;
	int m = 100;
	const int* p = &n;
	int* const p = &n;
	//const ����ָ�������*���ʱ�����ε�*p��Ҳ����˵����ͨ��*p���ı�*p��n����ֵ��
	//const ����ָ�������*�ұ��ǣ����ε���ָ�����p����p���ܱ��ı��ˣ�
	*p = 0;
	p = &m;
	return 0;
}