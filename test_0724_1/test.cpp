#define _CRT_SECURE_NO_WARNINGS 1

#include<iostream>
using namespace std;

class Animal
{
public:
	void speak(void)
	{
		cout << "������˵��" << endl;

	}
};

class Dog :public Animal
{
public:
	void speak(void)
	{
		cout << "��������" << endl;
	}
};

int main(int argc, char* argv[])
{
	Animal* p = new Dog;
	p->speak();//������˵��
	return 0;
}
