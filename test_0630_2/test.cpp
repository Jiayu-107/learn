#define _CRT_SECURE_NO_WARNINGS 1

#include<iostream>

using namespace std;

int main(int argc, char*argv[])
{
	//输入大写字母变小写字母 小写字母变大写字母

	char ch = '\0';
	cout << "请输入一个字母 " << endl;
	cin >> ch;
	if ('a' <= ch && ch <= 'z')
	{
		ch = ch - ('a' - 'A');//代码虽然臃肿 但是可读性强
		cout << "大写字母为 " << ch << endl;
	}
	else if ('A' <= ch && ch <= 'Z')
	{
		ch = ch + 32;
		cout << "小写字母为 " << ch << endl;
	}

	return 0;
}