#define _CRT_SECURE_NO_WARNINGS 1

#include<iostream>
using namespace std;
int main(int argc, char* argv[])
{
	//二维字符数组获取键盘输入（多个字符串）
	char arr[5][30] = {" "};
	int row = sizeof(arr) / sizeof(arr[5]);

	//获取键盘输入
	cout << "请输入五个字符串" << endl;
	int i = 0;
	for (i = 0; i < row; i++)
	{
		cin >> arr[i];
	}
	cout << endl;

	for (i = 0; i < row; i++)
	{
		cout << arr[i]<<" ";
	}


	return 0;
}