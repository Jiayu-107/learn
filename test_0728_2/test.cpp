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
		cout << "���캯��" << a << endl;
	}
	~Data()
	{
		cout << "��������" << a << endl;
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
	catch (int)//����
	{
		cout << "int�쳣ֵΪ:" << endl;
	}
	catch (char)//����
	{
		cout << "char�쳣ֵΪ:" << endl;
	}
	catch (...)//����
	{
	cout << "�����쳣ֵΪ:" << endl;
	}
}