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

	//list 容器的迭代器是双向迭代器 不支持加减数字 +2（随机迭代器可以） 支持++
	list<int>::iterator it = L1.begin();
	//it+2 err
	it++;
	L1.insert(it, 2, 100);
	PrintListInt(L1);//60 100 100 50 40 10 20 30

	//STL 提供的算法 只支持随机访问迭代器 而list是双向迭代器 所以STL提供的的算法不支持list
	//sort(L1.begin(), L1.end()); err
	L1.sort();
	PrintListInt(L1);
	L1.reverse();
	PrintListInt(L1);
	return 0;
}