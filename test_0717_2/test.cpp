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
			cout << "��������䣺" << age << "���Ϸ�" << endl;
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
			cout << "��������䣺" << age << "���Ϸ�" << endl;
		}
	}
	int GetAge(void)
	{
		return mAge;
	}

	void ShowPerson(void)
	{
		cout << "������" << mName << " " << "���䣺" << mAge << endl;
	}
};

int main(int argc, char* argv[])
{
	//�����һ��Person�࣬Person�����name��age���ԣ��ṩ��ʼ������(Init)�����ṩ��name��age��
	//��д����(set��get)��������ȷ��age�ĸ�ֵ����Ч��Χ��(0 - 100), ������Ч��Χ����ܾ���ֵ�����ṩ��
	//���������������

	Person ob;
	ob.Init("frank", 21);
	ob.ShowPerson();

	ob.SetName("bob");
	ob.SetAge(18);

	cout << ob.GetName() << " " << ob.GetAge() << endl;

	ob.ShowPerson();

	return 0;
}