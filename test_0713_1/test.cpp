#define _CRT_SECURE_NO_WARNINGS 1

#include<iostream>
using namespace std;

//void outputIntArr(int arr[5], int sz)
//һά������Ϊ�����Ĳ��� �ᱻ�������Ż�Ϊ ָ�����
void outputIntArr(int *arr, int sz)
{
	cout << "�ڲ�sizeof(arr)��СΪ��" << sizeof(arr) << endl;

	//������������
	int i = 0;
	for (i = 0; i < sz; i++)
	{
		//cout << *(arr + i) << " ";
		cout << arr[i] << " ";//�Ƽ�
	}
}

int main(int argc, char* argv)
{
	int arr[5] = { 1, 2, 3, 4, 5 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	cout << "�ⲿsizeof(arr)��СΪ��" << sizeof(arr) << endl;
	outputIntArr(arr, sz);

	return 0;
}
