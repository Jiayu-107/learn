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
	//const 修饰成员函数为只读（该成员函数不允许对 成员数据 赋值） mutable修饰的成员除外
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
