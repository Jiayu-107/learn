#include<iostream>
#include<set>
using namespace std;

void PrintSetInt(set<int>& s)
{
	//set �����ĵ�������ֻ�������� �������޸Ľ�ֵ ���ƻ�set���ڴ沼��
	//ԭ���� ƽ�������
	set<int>::const_iterator it = s.begin();
	for (; it != s.end(); it++)
	{
		cout << *it << " ";
	}
	cout << endl;
}

int main(int argc, char* argv[])
{
	set<int> s1;
	s1.insert(10);
	s1.insert(10);//set���� ��ֵ�������ظ�
	s1.insert(50);
	s1.insert(20);
	s1.insert(40);
	s1.insert(30);
	PrintSetInt(s1);

	return 0;
}