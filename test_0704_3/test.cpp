#define _CRT_SECURE_NO_WARNINGS 1

//强制类型转换
//(类型说明符)(表达式)
//功能：
//	  把表达式的运算结果强制转换成类型说明符所表示的了类型

//(int)p + 1; 对p强转成int类型 然后再+1
//(int)(p+1); 对p+1强转成int类型

#include<iostream>

using namespace std;

int main(int argc, char* argv)
{
	float f = 3.14f;
	int x = 0;
	x = (int)f;
	cout << "x = " << x << endl;
	cout << "f = " << f << endl;

	//不管自动转换类型还是强制转换类型 都是临时的
	return 0;
}
