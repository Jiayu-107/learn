#define _CRT_SECURE_NO_WARNINGS 1

#include<iostream>
using namespace std;

class Animal
{
public:
	virtual void speak(void)
	{
		cout << "¶¯ÎïÔÚËµ»°" << endl;
	}
};
class Dog :public Animal
{
public:
	void speak(void)
	{
		cout << "¹·ÔÚÍôÍô" << endl;
	}
};

class Cat :public Animal
{
public:
	void speak(void)
	{
		cout << "Ã¨Ã¨ß÷ß÷" << endl;
	}
};
int main()
{
	Animal* p1 = new Dog;
	p1->speak();//¹·¹·ÍôÍô
	Animal* p2 = new Cat;
	p2->speak();//Ã¨Ã¨ß÷ß÷

	return 0;
}
