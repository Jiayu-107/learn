#define _CRT_SECURE_NO_WARNINGS 1

#include<iostream>
using namespace std;

void Swap1(int* p1, int* p2)
{
	int tmp = *p1;
	*p1 = *p2;
	*p2 = tmp;
}

void Swap2(int &x, int &y)
{
	int tmp = x;
	x = y;
	y = tmp;
}

int main(int argc, char* argv[])
{
	//引用作为函数的参数 函数内部可以通过 引用 操作外部变量

	int a = 10;
	int b = 20;
	cout << "a = " << a << " ""b = " << b << endl;

	//Swap1(&a, &b);
	Swap2(a, b);
	cout << "a = " << a << " ""b = " << b << endl;

	/*
	引用的语法更简单清楚：
	1) 函数调用时传递的实参不必加“&”符
	2) 在被调函数中不必在参数前加“*”符 引用作为其它变量的别名而存在，因此在一些场合可以代替指针。
	3) C++主张用引用传递取代地址传递的方式，因为引用语法容易且不易出错。
	*/


	return 0;
}