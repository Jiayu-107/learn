#define _CRT_SECURE_NO_WARNINGS 1

#include<iostream>
using namespace std;

int main(int argc, char* argv[])
{
	//��ͨ����������
	int a = 10;
	//���󣺸�����a ȡ��������b
	//�����ʱ�� &���α���Ϊ���� b����a�ı��������ã�
	//ϵͳ����Ϊ���� ���ٿռ�
	int& b = a;//���ñ����ʼ��
	//a��b����ͬһ�ռ�����
	cout << "a = " << a << endl;
	cout << "b = " << b << endl;
	cout << "&a = " << &a << endl;
	cout << "&b = " << &b << endl;
	//����b�ȼ۲���a
	b = 100;
	cout << "a = " << a << endl;
	cout << "b = " << b << endl;

	//���������
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