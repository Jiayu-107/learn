#define _CRT_SECURE_NO_WARNINGS 1


#include<stdio.h>
int main()
{
	int a = 10;
	//int *pa = &a;
	//char* pc = &a;

	//char ch = 'w';
	void* p = &a;
	//p = &ch;
	//*p = 0; //�Ƿ��ļ��Ѱַ
	//p ������Ϊvoid* �������͵�ָ�� ������ʱ����ʼ����ֽ�  ָ������;������������ʱ���ʼ����ֽ�

	//p++; //err

	//void* ���͵�ָ�� ���Խ����������͵ĵ�ַ
	//void* ���͵�ָ�� ���ܽ��н����ò���
	//void* ���͵�ָ�� ���ܽ���+ - �����Ĳ���
	return 0;
}