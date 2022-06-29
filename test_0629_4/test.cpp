#define _CRT_SECURE_NO_WARNINGS 1

using namespace std;

#include<iostream>

int main(int argc, char* argv[])
{
	//判断两数较大数
	int num1 = 0;
	int num2 = 0;
	cout << "请输入两个整数：";
	cin >> num1 >> num2;
	if (num1 > num2)
	{
		cout << "两数较大者为 " << num1 << endl;
	}
	else if (num1 < num2)
	{
		cout << "两数较大者为 " << num2 << endl;
	}
	else
	{
		cout << "两数一样大" << endl;
	}

	return 0;
}