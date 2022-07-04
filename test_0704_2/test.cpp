#define _CRT_SECURE_NO_WARNINGS 1

#include<iostream>

using namespace std;

int main(int argc, char* argv)
{
	//无符号和有符号 参与运算 有符号会转换成无符号
	int data1 = -10;
	unsigned int data2 = 6;


	if (data1 + data2 > 0)
	
	//-4 原码：10000000 00000000 00000000 00000100
	//	 反码：11111111 11111111 11111111 11111011
	//   补码：11111111 11111111 11111111 11111100

	{
		cout << ">0" << endl;
	}
	else
	{
		cout << "<=0" << endl;
	}
	cout<<endl;

	//int 和 double 参与运算 会将int转成double 类型
	int data3 = 0;
	double data4 = 0.0;
	cout << sizeof(data3 + data4) << endl;
	cout << endl;

	//char和short类型 只要参与运算 都会将自己转换成int类型

	char ch = 'a';
	short sh = 0;
	cout << sizeof(ch + sh) << endl;//4
	cout << sizeof(ch + ch) << endl;//4
	cout << sizeof(sh + sh) << endl;//4
	return 0;
}