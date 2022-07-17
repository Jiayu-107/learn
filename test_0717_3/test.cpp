#define _CRT_SECURE_NO_WARNINGS 1

#include<iostream>
using namespace std;

class Data 
{
private:
	int mA;
public:
	//类中声明
	void SetA(int a);
	int GetA(void);
};

//类外实现
void Data::SetA(int a)
{
	mA = a;
}
int Data::GetA(void)
{
	return mA;
}


int main(int argc, char* argv[])
{
	//成员函数在类外实现
	Data ob;
	ob.SetA(10);
	cout << ob.GetA() << endl;
	return 0;;
}