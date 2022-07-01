#define _CRT_SECURE_NO_WARNINGS 1

#include<iostream>
#include<bitset>

using namespace std;

int main(int argc, char* argv[])
{
	short data1 = -10;//补码存储
	cout << bitset<16>(data1) << endl;
	short data2 = 6;//原码存储
	cout << bitset<16>(data2) << endl;
	short data3 = 0x8080;//原码存储
	cout << bitset<16>(data3) << endl;
	/*负数在计算机中以补码的形式存储
	  非负数在计算机中以原码的形式存储
	  八进制 以原码存储
	  十六进制 以原码存储*/

	return 0;
}