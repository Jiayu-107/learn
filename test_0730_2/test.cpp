#include<iostream>
#include<list>
#include<algorithm>
using namespace std;

void PrintListInt(list<int>& L)
{
	list<int>::iterator it = L.begin();
	for (; it != L.end(); it++)
	{
		cout << *it << " ";
	}
	cout << endl;
}

int main(int argc, char* argv[])
{
	list<int> L1;
	L1.push_back(10);
	L1.push_back(20);
	L1.push_back(30);
	L1.push_front(40);
	L1.push_front(50);
	L1.push_front(60);

	PrintListInt(L1);//60 50 40 10 20 30

	//list �����ĵ�������˫������� ��֧�ּӼ����� +2��������������ԣ� ֧��++
	list<int>::iterator it = L1.begin();
	//it+2 err
	it++;
	L1.insert(it, 2, 100);
	PrintListInt(L1);//60 100 100 50 40 10 20 30

	//STL �ṩ���㷨 ֻ֧��������ʵ����� ��list��˫������� ����STL�ṩ�ĵ��㷨��֧��list
	//sort(L1.begin(), L1.end()); err
	L1.sort();
	PrintListInt(L1);
	L1.reverse();
	PrintListInt(L1);
	return 0;
}