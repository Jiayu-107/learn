#define _CRT_SECURE_NO_WARNINGS 1

#include<iostream>

using namespace std;

int main(int argc, char* argv[])
{
	//如果变量 被高频繁使用 会自动将变量存储在寄存器中 目的：提高访问效率
	register int data = 0;//data将放入寄存器

	//尽量不要对寄存器变量取地址(c语言绝对不能 c++不严格可以)
	&data;
	cout << &data << endl;
	//register 修饰的变量 只是尽量放入寄存器中 因为寄存器的数量是有限的

	return 0;
}