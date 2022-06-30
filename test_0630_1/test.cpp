#define _CRT_SECURE_NO_WARNINGS 1

#include<iostream>

using namespace std;

int main(int argc, char* argv[])
{
	char ch1 = 'x';
	cout << ch1 << endl;
	cout << (int)ch1 << endl;

	ch1 = 120;//左右类型匹配
	cout << ch1 << endl;
	cout << (int)ch1 << endl;

	char ch2 = '\0';//字符变量的初始化
	cout << ch2 << endl;

	// '\0' '0' 数值0 的区别
	// '\0' 字符常量（char）ASCII码值为 0
	// '0' 字符常量（char）ASCII码值为48
	// 数值0 整型常量 在内存中存储值为0


	return 0;
}