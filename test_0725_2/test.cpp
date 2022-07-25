#define _CRT_SECURE_NO_WARNINGS 1

#include<iostream>
using namespace std;
//运算符重载
class Data
{
	friend ostream& operator<<(ostream& out, Data& ob);
private:
	int data;
public:
	Data(){}
	Data(int data)
	{
		this->data = data;
	}
};

template<typename T>
void MyPrintAll(T a)
{
	cout << a << endl;
	cout << "函数模板" << endl;
}

ostream& operator<<(ostream& out, Data& ob)
{
	out << ob.data;
	return out;
}
int main(int argc, char* argv[])
{
	//函数模板的局限性
	//当函数模板推导出 T为数组或者其它自定义类型时 可能的导致运算符不识别

	MyPrintAll(10);
	MyPrintAll('a');

	Data ob(100);
	MyPrintAll(ob);

	return 0;
}