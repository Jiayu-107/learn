#define _CRT_SECURE_NO_WARNINGS 1

#include <iostream>
using namespace std;
class Data
{
public:
	int mA;
public:
	Data()
	{
		cout << "无参构造" << endl;
	}
	Data(int a)
	{
		mA = a;
		cout << "有参构造 mA=" << mA << endl;
	}
#if 1
	//拷贝构造的定义形式:ob就是旧对象的引用
	Data(const Data& ob)
	{
		//一旦实现了 拷贝构造函数 必须完成赋值操作
		mA = ob.mA;
		cout << "拷贝构造函数" << endl;
	}
#endif
	~Data()
	{
		cout << "析构函数mA=" << mA << endl;
	}
};
int main(int argc, char* argv[])
{
	Data ob1(10);
	//旧对象给新对象初始化 就会调用拷贝构造函数
	Data ob2 = ob1;
	cout << "ob2.mA =" << ob2.mA << endl;
	return 0;
}
