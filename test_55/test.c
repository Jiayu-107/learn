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
	int arr[10] = { 0 }; //һ����������
	int(*p)[10] = &arr; //һ����������ָ�� - ȡ����������ĵ�ַ

	int (*pf)(int, int); //һ������ָ��
	int(*pfarr[4])(int, int); //pfarr ��һ������ - ����ָ������
	int(*(*ppfarr)[4])(int, int);

	//ppfarr ��һ��ָ�� ����ָ������ ��ָ��
	// 
	//ppfarr ��һ������ָ�룬ָ��ָ����������ĸ�Ԫ��
	//ָ��������ÿ��Ԫ�ص�������һ������ָ�� int(*)(int, int)
	return 0;
}