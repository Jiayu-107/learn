#define _CRT_SECURE_NO_WARNINGS 1

#include <iostream>
using namespace std;
//有 纯虚函数的类 为抽象类
class Animal
{
public:
	//纯虚函数
	virtual void speak(void) = 0;
};
class Dog :public Animal
{
public:
	//子类一定要重写 父类的所有纯虚函数
	void speak(void)
	{
		cout << "狗在汪汪" << endl;
	}
};
int main(int argc, char* argv[])
{
	//Animal ob;//err 抽象类不能实例化对象
	Animal* p = new Dog;
	p->speak();//"狗在汪汪"
	return 0;

	/*
	一旦类中有纯虚函数，那么这个类 就是抽象类。
     抽象类 不能实例化 对象。（Animal ob；错误）
     抽象类 必须被继承 同时 子类 必须重写 父类的所有纯虚函数，否则 子类也是抽象类。
    */
	//抽象类主要的目的 是设计 类的接口：

}