#define _CRT_SECURE_NO_WARNINGS 1

#include<iostream>
using namespace std;
class Data
{
public:
	int a;
	int b;
	mutable int c;
public:
	Data(int a, int b, int c)
	{
		this->a = a;
		this->b = b;
		this->c = c;
	}
	//const ���γ�Ա����Ϊֻ�����ó�Ա����������� ��Ա���� ��ֵ�� mutable���εĳ�Ա����
	void showData(void) const
	{
		//a = 100;//err
		c = 100;
		cout << a << " " << b << " " << c << endl;
	}
};
int main()
{
	Data ob1(10, 20, 30);
	ob1.showData();
}
