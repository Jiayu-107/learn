#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<stdlib.h>
#include<string.h>


//有问题 改正
//1.动态内存开辟未释放（程序存在内存泄漏的问题）
//2.运行代码程序会出现崩溃的状况
//原因是：
//       str以值的形式传递
//		 p是GetMemory的形参，只在函数内部有效
//		 等GetMemory函数返回之后，动态开辟内存尚未释放
//		 并且无法找到，所以会造成内存泄露

//下面进行修改

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
//1.传址调用
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



//2.返回值
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