#define _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
using namespace std;
//�쳣����
class BaseException {
public:
	virtual void printError() {};
};
//��ָ���쳣
class NullPointerException : public BaseException {
public:
	virtual void printError() {
		cout << "��ָ���쳣!" << endl;
	}
};
//Խ���쳣
class OutOfRangeException : public BaseException {
public:
	virtual void printError() {
		cout << "Խ���쳣!" << endl;
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
	catch (BaseException& ex)//�������� ���Բ������ø������������������������
	{
		ex.printError();
	}
}