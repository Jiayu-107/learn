#define _CRT_SECURE_NO_WARNINGS 1

using namespace std;

#include <iostream>
#include <bitset>

int main(int argc, char* argv[])
{
	//coutĬ����ʮ�������
	cout<<0b00001010<<endl;//10
	cout << 0123 << endl;//83
	cout << 0xab << endl;//171

	//cout��Ҫʹ��bitset<λ��>(��ֵ)��λ��һ�㶼��8, 16, 32
	cout << bitset<8>(0b00001010) << endl;
	//cout��Ҫ��oct����˽���
	cout << oct << 0123 << endl;
	//cout��Ҫ��hex���ʮ������
	cout << hex << 0xab << endl;
	return 0;
}