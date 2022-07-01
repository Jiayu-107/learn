#define _CRT_SECURE_NO_WARNINGS 1

#include<iostream>
#include<bitset>

using namespace std;

int main(int argc, char* argv[])
{
	//先将-10转换成无符号数（-10的补码）
	unsigned short data = -10;//原码 1000 0000 0000 1010  补码 1111 1111 1111 0110
	cout << bitset<16>(data) << endl;//输出 1111 1111 1111 0110
	cout << "data = " << data << endl;//65526 == 1111 1111 1111 0110

	/*把 -10 的补码存储在内存中
	  但是因为 -10 赋值的类型是无符号数
	  所以计算机输出的就是 -10 的补码
	  无符号数的原反补相同
	*/
	return 0;
}