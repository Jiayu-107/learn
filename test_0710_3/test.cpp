#define _CRT_SECURE_NO_WARNINGS 1

#include<iostream>
using namespace std;
int main(int argc, char* argv[])
{
	//��ά�ַ������ȡ�������루����ַ�����
	char arr[5][30] = {" "};
	int row = sizeof(arr) / sizeof(arr[5]);

	//��ȡ��������
	cout << "����������ַ���" << endl;
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