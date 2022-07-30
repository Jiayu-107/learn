#include<iostream>
#include<set>
using namespace std;

void PrintSetInt(set<int>& s)
{
	//set 容器的迭代器是只读迭代器 不允许修改建值 会破坏set的内存布局
	//原理是 平衡二叉树
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
	s1.insert(10);//set容器 键值不允许重复
	s1.insert(50);
	s1.insert(20);
	s1.insert(40);
	s1.insert(30);
	PrintSetInt(s1);

	return 0;
}