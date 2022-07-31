#include<iostream>
#include<string>
using namespace std;
//函数对象（仿函数）
class Print
{
public:
	void operator()(const char* str)
	{
		cout << str << endl;
	}
};
int main()
{
	Print ob;
	ob("hello world");
	Print()("hello world");
}