#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<stdlib.h>
#include<string.h>


//������ ����
//1.��̬�ڴ濪��δ�ͷţ���������ڴ�й©�����⣩
//2.���д���������ֱ�����״��
//ԭ���ǣ�
//       str��ֵ����ʽ����
//		 p��GetMemory���βΣ�ֻ�ں����ڲ���Ч
//		 ��GetMemory��������֮�󣬶�̬�����ڴ���δ�ͷ�
//		 �����޷��ҵ������Ի�����ڴ�й¶

//��������޸�

//void GetMemory(char* p)
//{
//	p = (char*)malloc(100);
//}
//
//void Test(void)
//{
//	char* str = NULL;
//	GetMemory(str);
//	strcpy(str, "hello world!");
//	printf(str);
//}
// 
// 
//1.��ַ����
//void GetMemory(char** p)
//{
//	*p = (char*)malloc(100);
//}
//
//void Test(void)
//{
//	char* str = NULL;
//	GetMemory(&str);
//	strcpy(str, "hello world!");
//	printf(str);
//
//	free(str);
//	str = NULL;
//}



//2.����ֵ
char * GetMemory(char* p)
{
	p = (char*)malloc(100);
	return p;
}

void Test(void)
{
	char* str = NULL;
	str = GetMemory(str);
	strcpy(str, "hello world!");
	printf(str);

	free(str);
	str = NULL;
}


int main()
{
	Test();
	return 0;
}