#define _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
using namespace std;

class MyClass01 {
public:
	int mA;
};
class MyClass02 {
public:
	int mA;
	static int mB;
};
class MyClass03 {
public:
		void printMyClass() {
		cout << "hello world!" << endl;
	}
public:
	int mA;
	static int mB;
};
class MyClass04 {
public:
	void printMyClass() {
		cout << "hello world!" << endl;
	}
	static void ShowMyClass() {
		cout << "hello world��" << endl;
	}
public:
	int mA;
	static int mB;
};
int main() {
	MyClass01 mclass01;
	MyClass02 mclass02;
	MyClass03 mclass03;
	MyClass04 mclass04;
	cout << "MyClass01:" << sizeof(mclass01) << endl; //4
	//��̬���ݳ�Ա�����������������
	cout << "MyClass02:" << sizeof(mclass02) << endl; //4
	//�Ǿ�̬��Ա�������������������
	cout << "MyClass03:" << sizeof(mclass03) << endl; //4
	//��̬��Ա����Ҳ���������������
	cout << "MyClass04:" << sizeof(mclass04) << endl; //4
	return 0;
}