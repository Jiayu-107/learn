#define _CRT_SECURE_NO_WARNINGS 1

#include<iostream>

using namespace std;

int main(int argc, char* argv[])
{
	int data = 0;
	cout << "请输入一个整型数据";
	//cin会根据data的类型 自动判断输入
	cin >> data;
	cout << "data = " << data << endl;

	return 0;
}