#define _CRT_SECURE_NO_WARNINGS 1

#include<iostream>
#include<string.h>
using namespace std;

class Person
{
private:
	char mName[32];
	int mAge;
public:
	void Init(const char* name, int age)
	{
		strcpy(mName, name);
		if ((age > 0) && (age < 100))
		{
			mAge = age;
		}
		else
		{
			cout << "输入的年龄：" << age << "不合法" << endl;
		}
	}
	void SetName(const char* name)
	{
		strcpy(mName, name);
	}
	char* GetName(void)
	{
		return mName;
	}
	void SetAge(int age)
	{
		if ((age > 0) && (age < 100))
		{
			mAge = age;
		}
		else
		{
			cout << "输入的年龄：" << age << "不合法" << endl;
		}
	}
	int GetAge(void)
	{
		return mAge;
	}

	void ShowPerson(void)
	{
		cout << "姓名：" << mName << " " << "年龄：" << mAge << endl;
	}
};

int main(int argc, char* argv[])
{
	//请设计一个Person类，Person类具有name和age属性，提供初始化函数(Init)，并提供对name和age的
	//读写函数(set，get)，但必须确保age的赋值在有效范围内(0 - 100), 超出有效范围，则拒绝赋值，并提供方
	//法输出姓名和年龄

	Person ob;
	ob.Init("frank", 21);
	ob.ShowPerson();

	ob.SetName("bob");
	ob.SetAge(18);

	cout << ob.GetName() << " " << ob.GetAge() << endl;

	ob.ShowPerson();

	return 0;
}