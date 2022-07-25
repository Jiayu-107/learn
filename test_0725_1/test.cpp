#define _CRT_SECURE_NO_WARNINGS 1

#include<iostream>
using namespace std;
//T只能对当前函数有效 typename可以换成class
template<typename T>
void swapAll(T& a, T& b)
{
	T tmp = a;
	a = b;
	b = tmp;
	cout << "函数模板" << endl;
}

void swapAll(int a, int b)
{
	int tmp = a;
	a = b;
	b = tmp;
	cout << "普通函数" << endl;
}

int main(int argc, char* argv[])
{	
	//函数模板和普通函数都识别 默认使用普通函数 可以强制使用函数模板
	int a = 10;
	int b = 20;
	swapAll(a, b);//调用普通函数
	cout << "a = " << a << " " << "b = " << b << endl;
	//强制使用函数模板
	swapAll<>(a, b);//调用函数模板
	//函数模板 自动类型推导时 不能对函数的参数 进行 自动类型转换

	cout <<" ------------------ "<<endl;
	swapAll(10, 20);//普通函数
	swapAll('a', 'b');//普通函数
	swapAll<>('a', 'b');//函数模板
	swapAll(10, 'b');//普通函数
	//swapAll<int>(10, "b");

	return 0;
}