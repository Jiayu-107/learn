#define _CRT_SECURE_NO_WARNINGS 1

#include<iostream>
using namespace std;
class Data
{
public:
	int mA;
public:
	//无参构造函数
	Data()
	{
		mA = 0;
		cout << "无参构造函数" << endl;
	}
	//有参构造函数
	Data(int a)
	{
		mA = a;
		cout << "有参构造函数 mA=" << mA << endl;
	}
};
int main()
{
	//隐式调用无参构造函数（推荐）
	Data ob1;
	//显示调用无参构造函数
	Data ob2 = Data();
	//隐式调用有参构造函数（推荐）
	Data ob3(10);
	//显示调用有参构造函数
	Data ob4 = Data(10);
	//匿名对象(无参) 当前语句技术 立即释放
	Data();
	Data(20);
	//构造函数隐式转换（类中只有一个数据成员）
	Data ob5 = 100;
}