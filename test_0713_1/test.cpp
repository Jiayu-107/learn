#define _CRT_SECURE_NO_WARNINGS 1

#include<iostream>
using namespace std;

//void outputIntArr(int arr[5], int sz)
//一维数组作为函数的参数 会被编译器优化为 指针变量
void outputIntArr(int *arr, int sz)
{
	cout << "内部sizeof(arr)大小为：" << sizeof(arr) << endl;

	//遍历整个数组
	int i = 0;
	for (i = 0; i < sz; i++)
	{
		//cout << *(arr + i) << " ";
		cout << arr[i] << " ";//推荐
	}
}

int main(int argc, char* argv)
{
	int arr[5] = { 1, 2, 3, 4, 5 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	cout << "外部sizeof(arr)大小为：" << sizeof(arr) << endl;
	outputIntArr(arr, sz);

	return 0;
}
