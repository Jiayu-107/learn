#define _CRT_SECURE_NO_WARNINGS 1

#include<iostream>

using namespace std;
int main(int argc, char* argv[])
{
	try
	{
		//throw 1;
		//throw 'a';
		throw 2.13f;
	}
	catch(int e)
	{
		cout << "int 异常值为" << e << endl;
	}
	catch (char e)
	{
		cout << "char 异常值为" << e << endl;
	}
	catch(float e)
	{
		cout << "float 异常值为" << e << endl;
	}
	return 0;
}