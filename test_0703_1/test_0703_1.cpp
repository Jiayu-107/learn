#include<iostream>

int main(int argc, char* argv[])
{
	//const 修饰 data为只读变量 data本质是变量
	//只读变量 只能被初始化 不能被赋值
	//const int data = 100;
	//data = 10; err

	//如果以常量初始化 const修饰的只读变量 那么只读变量的值 事先存放在 “符号常量表中” 不会立即给data开辟空间
	const int data1 = 100;
	//当对data取地址时 系统才会为data开辟空间
	int* p1 = (int*) & data1;
	*p1 = 200;
	std::cout << "*p1 = " << *p1 << std::endl;//200
	std::cout << "data1 = " << data1 << std::endl;//100

	//如果以变量初始化 const修饰的只读变量 那么只读变量会立即开辟空间（没有符号常量表）
	int num = 10;
	const int data2 = num;//以变量初始化data
	int* p2 = (int*)&data2;
	*p2 = 20;
	std::cout << "*p2 = " << *p2 << '\n';//20
	std::cout << "data2 = " << data2 << std::endl;//20

	//const 修饰 自定义类型变量 立即开辟空间（没有符号常量表）
	return 0;
}