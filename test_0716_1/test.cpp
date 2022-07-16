#define _CRT_SECURE_NO_WARNINGS 1

#include<iostream>
using namespace std;

int My_Add(int x, int y);
int main(int argc, char*argv[])
{
	//内联函数 必须在定义的时候 使用关键字 inline修饰 不能在声明的时候使用inline
	int num1 = 1;
	int num2 = 2;
	int res = My_Add(num1, num2);
	cout << "res = " << res << endl;

	return 0;
}
//内联函数：在编译阶段 将内联函数中的函数体 替换函数调用处。避免函数调用时的开销。
inline int My_Add(int x, int y)
{
	return x + y;
}