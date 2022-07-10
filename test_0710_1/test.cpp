#define _CRT_SECURE_NO_WARNINGS 1

#include<iostream>

using namespace std;

int main(int argc, char* argv[])
{
	char str[30] = " ";
	cout << "请输入字符串:" << endl;
	cin.getline(str, sizeof(str)); //获取字符串的长度

	int i = 0;
	while (str[i] != '\0')
	{
		i++;
	}

	cout << "字符串长度为：" << i << endl;
	return 0;
}