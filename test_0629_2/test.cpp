#define _CRT_SECURE_NO_WARNINGS 1

using namespace std;

#include<iostream>

//函数外定义的变量为全局变量
//全局变量如果不初始化内容为0
int num;

int main(int argc, char*argv[])
{
	//{}复合语句 中定义的变量 一般为普通局部变量
	//普通局部变量 不初始化内容 不确定（随机）
	int data;
	cout << "data= " << data << "\n";
	cout << "num= " << num << endl;
	return 0;
}