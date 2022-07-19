#define _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
using namespace std;

class Data
{
public:
	int a;//普通成员数据
	//类中定义
	static int b;//静态成员数据
};
//类外初始化
int Data::b = 100;//不用加static
int main(int argc, char* argv[])
{
	//静态成员数据 通过类名称直接访问（属于类）
	cout << Data::b << endl;
	//静态成员数据 通过对象访问(共享)
	Data ob1;
	cout << ob1.b << endl;//100
	ob1.b = 200;
	Data ob2;
	ob2.b = 300;
	cout << Data::b << endl;//300
	return 0;
}
