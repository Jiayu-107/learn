#define _CRT_SECURE_NO_WARNINGS 1

#include <iostream>
using namespace std;
//类模板
template<class T1, class T2>
class Base
{
private:
	T1 a;
	T2 b;
public:
	Base() {}
	Base(T1 a, T2 b);
	void showData();
};
template<class T1, class T2>
Base<T1, T2>::Base(T1 a, T2 b)
{
	this->a = a;
	this->b = b;
}
template<class T1, class T2>
void Base<T1, T2>::showData()
{
	cout << a << " " << b << endl;
}
//类模板派生处普通类
class Son1 :public Base<int, char>
{
public:
	int c;
public:
	Son1(int a, char b, int c) :Base<int, char>(a, b) {
		this->c = c;
	}
};
int main(int argc, char* argv[])
{
	Son1 ob1(100, 'A', 200);
	ob1.showData();
	cout << ob1.c << endl;
	return 0;
}