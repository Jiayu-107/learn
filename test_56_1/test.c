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
	//*p = 0; //非法的间接寻址
	//p 的类型为void* 是无类型的指针 解引用时你访问几个字节  指针的类型决定了你解引用时访问几个字节

	//p++; //err

	//void* 类型的指针 可以接收任意类型的地址
	//void* 类型的指针 不能进行解引用操作
	//void* 类型的指针 不能进行+ - 整数的操作
	return 0;
}