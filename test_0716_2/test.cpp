#define _CRT_SECURE_NO_WARNINGS 1

#include<iostream>
using namespace std;

void printFun(int a)
{
	cout << "int" << endl;
}
void printFun(int a, char b)
{
	cout << "int char" << endl;
}
void printFun(char a, int b)
{
	cout << "char int" << endl;
}
void printFun(char a)
{
	cout << "char" << endl;
}
int main()
{
	//函数重载 是c++的多态的特性（静态多态）。
	//函数重载：用同一个函数名 代表不同的函数功能。

	//同一作用域 函数的参数类型不同，个数不同，顺序不同，都可以重载（返回值类型不能作为重载的条件）

	printFun(10);//int
	printFun(10, 'a');//int char
	printFun('a', 10);//char int
	printFun('a');//char
}
