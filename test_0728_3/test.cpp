#define _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
using namespace std;
//异常基类
class BaseException {
public:
	virtual void printError() {};
};
//空指针异常
class NullPointerException : public BaseException {
public:
	virtual void printError() {
		cout << "空指针异常!" << endl;
	}
};
//越界异常
class OutOfRangeException : public BaseException {
public:
	virtual void printError() {
		cout << "越界异常!" << endl;
	}
};
void doWork() {
	//throw NullPointerException();
	throw OutOfRangeException();
}
int main()
{
	try {
		doWork();
	}
	catch (BaseException& ex)//父类引用 可以捕获搭配该父类派生出的所有子类的子类
	{
		ex.printError();
	}
}