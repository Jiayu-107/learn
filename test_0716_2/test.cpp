#define _CRT_SECURE_NO_WARNINGS 1

#include<iostream>
using namespace std;

void printFun(int a)
{
	cout << "int" << endl;
}
void printFun(int a, char b)
{
	cout << "int char" << endl;
}
void printFun(char a, int b)
{
	cout << "char int" << endl;
}
void printFun(char a)
{
	cout << "char" << endl;
}
int main()
{
	//�������� ��c++�Ķ�̬�����ԣ���̬��̬����
	//�������أ���ͬһ�������� ����ͬ�ĺ������ܡ�

	//ͬһ������ �����Ĳ������Ͳ�ͬ��������ͬ��˳��ͬ�����������أ�����ֵ���Ͳ�����Ϊ���ص�������

	printFun(10);//int
	printFun(10, 'a');//int char
	printFun('a', 10);//char int
	printFun('a');//char
}
