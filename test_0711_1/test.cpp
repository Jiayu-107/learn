#define _CRT_SECURE_NO_WARNINGS 1

#include<iostream>
using namespace std;

void set_data(int num)
{
	cout << "num = " << num << endl;
	//�޸��ⲿ������ֵʧ��
	num = 100;
}

int main(int argc, char*argv[])
{
	int data = 0;
	set_data(data);

	cout << "data = " << data << endl;
	return 0;
}