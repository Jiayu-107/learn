#define _CRT_SECURE_NO_WARNINGS 1

#include<iostream>
using namespace std;

//void outputIntArr(int arr[][4], int row, int col)
//��ά������Ϊ�������β� �ᱻ�������Ż�Ϊ һά����ָ��
void outputIntArr(int(*arr)[4], int row, int col)
{
	cout << "�ڲ�sizeof(arr)��СΪ��" << sizeof(arr) << endl;
	int i = 0; int j = 0;
	for (i = 0; i < row; i++)
	{
		for (j = 0; j < col; j++)
		{
			cout << *( * (arr + i) + j) << " ";
			//cout << arr[i][j] << " ";
		}
		cout << endl;
	}
}

int main(int argc, char* argv)
{
	int arr[3][4] = { 1,2,3,4,5,6,7,8,9,10,11,12};
	int row = sizeof(arr) / sizeof(arr[0]);
	int col = sizeof(arr[0]) / sizeof(arr[0][0]);
	cout << "�ⲿsizeof(arr)��СΪ��" << sizeof(arr) << endl;
	outputIntArr(arr, row, col);
	return 0;
}