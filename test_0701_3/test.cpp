#define _CRT_SECURE_NO_WARNINGS 1

#include<iostream>
#include<bitset>

using namespace std;

int main(int argc, char* argv[])
{
	//�Ƚ�-10ת�����޷�������-10�Ĳ��룩
	unsigned short data = -10;//ԭ�� 1000 0000 0000 1010  ���� 1111 1111 1111 0110
	cout << bitset<16>(data) << endl;//��� 1111 1111 1111 0110
	cout << "data = " << data << endl;//65526 == 1111 1111 1111 0110

	/*�� -10 �Ĳ���洢���ڴ���
	  ������Ϊ -10 ��ֵ���������޷�����
	  ���Լ��������ľ��� -10 �Ĳ���
	  �޷�������ԭ������ͬ
	*/
	return 0;
}