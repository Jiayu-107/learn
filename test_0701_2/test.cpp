#define _CRT_SECURE_NO_WARNINGS 1

#include<iostream>
#include<bitset>

using namespace std;

int main(int argc, char* argv[])
{
	short data1 = -10;//����洢
	cout << bitset<16>(data1) << endl;
	short data2 = 6;//ԭ��洢
	cout << bitset<16>(data2) << endl;
	short data3 = 0x8080;//ԭ��洢
	cout << bitset<16>(data3) << endl;
	/*�����ڼ�������Բ������ʽ�洢
	  �Ǹ����ڼ��������ԭ�����ʽ�洢
	  �˽��� ��ԭ��洢
	  ʮ������ ��ԭ��洢*/

	return 0;
}