#define _CRT_SECURE_NO_WARNINGS 1

#include<iostream>

using namespace std;

int main(int argc, char* argv)
{
	int arr[5] = { 0 };
	int sz = sizeof(arr) / sizeof(arr[0]);

	cout << "请输入" << sz << "个int数值：";
	int i = 0;
	for (i = 0; i < sz; i++)
	{
		cin >> arr[i];
	}

	for (i = 0; i < sz; i++)
	{
		cout << arr[i] << " ";
	}
	cout << endl;

	return 0;
}