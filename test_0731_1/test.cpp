#include<iostream>
#include<string>
using namespace std;
//�������󣨷º�����
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