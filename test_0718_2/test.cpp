#define _CRT_SECURE_NO_WARNINGS 1

#include<iostream>
using namespace std;

class Data1
{
public:
	int mA;
public:
	//无参构造函数
	Data1()
	{
		mA = 0;
		cout << "无参构造函数" << endl;
	}
	//有参构造函数
	Data1(int a)
	{
		mA = a;
		cout << "有参构造函数 mA=" << mA << endl;
	}
	//析构函数
	~Data1()
	{
		cout << "析构函数 mA=" << mA << endl;
		
	}
};
