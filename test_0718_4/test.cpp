#define _CRT_SECURE_NO_WARNINGS 1

#include<iostream>
#include<string.h>
using namespace std;
class Data5
{
public:
	char* name;
public:
	Data5()
	{
		name = NULL;
	}
	Data5(char* str)
	{
		name = new char[strlen(str) + 1];
		strcpy(name, str);
		cout << "�вι��� name=" << name << endl;
	}
	Data5(const Data5& ob)//���
	{
		//Ϊ�����ָ���Ա��������Ŀռ�
		name = new char[strlen(ob.name) + 1];
		strcpy(name, ob.name);
		cout << "�������캯��" << endl;
	}
	~Data5()
	{
		cout << "��������name = " << name << endl;
		if (name != NULL)
		{
			delete[] name;
			name = NULL;
		}
	}
};
void test05()
{
	Data5 ob1((char*)"hello world\n");
	Data5 ob2 = ob1;
}