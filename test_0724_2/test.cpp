#define _CRT_SECURE_NO_WARNINGS 1

#include<iostream>
using namespace std;

class Animal
{
public:
	virtual void speak(void)
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

class Cat :public Animal
{
public:
	void speak(void)
	{
		cout << "èè����" << endl;
	}
};
int main()
{
	Animal* p1 = new Dog;
	p1->speak();//��������
	Animal* p2 = new Cat;
	p2->speak();//èè����

	return 0;
}
