#define _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
using namespace std;
//�������ģʽ
class SingleTon
{
private:
	SingleTon()
	{
		count = 0;
		cout << "�޲ι���" << endl;
	}
	SingleTon(const SingleTon& ob)
	{
		count = 0;
		cout << "��������" << endl;
	}
	~SingleTon()
	{
		cout << "��������" << endl;
	}
private:
	static SingleTon* const p;
	int count;
public:
	static SingleTon* GetSingleTon(void)
	{
		return p;
	}
};

SingleTon* const SingleTon::p = new SingleTon;

int main(int argc, char* argv[])
{

	return 0;
}
