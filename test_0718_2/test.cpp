#define _CRT_SECURE_NO_WARNINGS 1

#include<iostream>
using namespace std;

class Data1
{
public:
	int mA;
public:
	//�޲ι��캯��
	Data1()
	{
		mA = 0;
		cout << "�޲ι��캯��" << endl;
	}
	//�вι��캯��
	Data1(int a)
	{
		mA = a;
		cout << "�вι��캯�� mA=" << mA << endl;
	}
	//��������
	~Data1()
	{
		cout << "�������� mA=" << mA << endl;
		
	}
};
