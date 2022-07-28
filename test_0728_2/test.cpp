#define _CRT_SECURE_NO_WARNINGS 1

#include <iostream>
using namespace std;
class Data
{
public:
	int a;
public:
	Data() {}
	Data(int a)
	{
		this->a = a;
		cout << "构造函数" << a << endl;
	}
	~Data()
	{
		cout << "析构函数" << a << endl;
	}
};
int main()
{
	int ret = 0;
	try
	{
		Data ob1(10);
		Data ob2(20);
		Data ob3(30);
		throw 1;
	}
	catch (int)//捕获
	{
		cout << "int异常值为:" << endl;
	}
	catch (char)//捕获
	{
		cout << "char异常值为:" << endl;
	}
	catch (...)//捕获
	{
	cout << "其他异常值为:" << endl;
	}
}