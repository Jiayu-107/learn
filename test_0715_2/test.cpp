#define _CRT_SECURE_NO_WARNINGS 1

#include<iostream>
using namespace std;

int main(int argc, char* argv[])
{
	//普通变量的引用
	int a = 10;
	//需求：给变量a 取个别名叫b
	//定义的时候 &修饰变量为引用 b就是a的别名（引用）
	//系统不会为引用 开辟空间
	int& b = a;//引用必须初始化
	//a和b代表同一空间内容
	cout << "a = " << a << endl;
	cout << "b = " << b << endl;
	cout << "&a = " << &a << endl;
	cout << "&b = " << &b << endl;
	//操作b等价操作a
	b = 100;
	cout << "a = " << a << endl;
	cout << "b = " << b << endl;

	//数组的引用
	int arr[5] = { 1,2,3,4,5 };
	int sz = sizeof(arr) / sizeof(arr[0]);

	//&my_arr
	//int arr[5];
	int(&my_arr)[5] = arr;
	int i = 0;
	for (i = 0; i < sz; i++)
	{
		cout << arr[i] << " ";
		cout << my_arr[i] << " ";
	}




	return 0;

}