#include<iostream>
#include<string>
#include<set>
using namespace std;

class SortSetPerson;
class person
{
	friend class SortSetPerson;
	friend void PrintSetPerson(set<person, SortSetPerson>& s);
private:
	int num;
	string name;
	float score;
public:
	person(){}
	person(int num, string name, float score)
	{
		this->num = num;
		this->name = name;
		this->score = score;
	}
};

//仿函数：重载函数调用运算符（）的类
class SortSetPerson
{
public:
	bool operator()(person ob1, person ob2) const
	{
		return ob1.num < ob2.num;
	}
};

void PrintSetPerson(set<person, SortSetPerson>& s)
{
	set<person, SortSetPerson>::iterator it = s.begin();
	for (; it != s.end(); it++)
	{
		cout << (*it).num << (*it).name << (*it).score << endl;
	}
}
int main(int argc, char* argv[])
{
	//set容器 存放自定义数据必须修改排序类型
	set<person, SortSetPerson> s1;
	s1.insert(person(100, "lucy", 88.8f));
	s1.insert(person(105, "bob", 88.8f));
	s1.insert(person(103, "tom", 88.8f));
	s1.insert(person(104, "mike", 88.8f));
	s1.insert(person(101, "frank", 88.8f));
	PrintSetPerson(s1);
	return 0;
}