#define _CRT_SECURE_NO_WARNINGS 1

#include<iostream>
using namespace std;

class Animal
{
public:
	void speak(void)
	{
		cout << "动物在说话" << endl;

	}
};

class Dog :public Animal
{
public:
	void speak(void)
	{
		cout << "狗狗汪汪" << endl;
	}
};

int main(int argc, char* argv[])
{
	Animal* p = new Dog;
	p->speak();//动物在说话
	return 0;
}
