#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	//ָ������ - ���� - ���ָ�������
	//����ָ�� - ָ�� - 
	int i = 0;
	int a = 10;
	int b = 20;
	int c = 30;
	int* pa = &a;
	int* pb = &b;
	int* pc = &c;
	printf("%d %d %d\n",*pa,*pb,*pc);
	//�������� - �������
	//�ַ����� - ����ַ�
	//ָ������ - ���ָ��
	//int arr[10];//��������
	int* arr2[3] = {&a,&b,&c};//ָ������
	for (i = 0; i < 3; i++)
	{
		printf("%d\n",*arr2[i]);
	}
	return 0;
}