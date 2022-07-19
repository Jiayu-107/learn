#define _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
using namespace std;
//单例设计模式
class SingleTon
{
private:
	SingleTon()
	{
		count = 0;
		cout << "无参构造" << endl;
	}
	SingleTon(const SingleTon& ob)
	{
		count = 0;
		cout << "拷贝构造" << endl;
	}
	~SingleTon()
	{
		cout << "析构函数" << endl;
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
