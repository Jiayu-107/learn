#include<iostream>
using namespace std;

struct stu
{
	//数据域
	int num;
	char name[32];

	//指针域
	struct stu* next;
};

int main(int argc, char* argv)
{
	//struct类型增强
	//c中定义结构体变量需要加上struct关键字，c++不需要。 c中的结构体只能定义成员变量，不能定义成员
	//函数。c++即可以定义成员变量，也可以定义成员函数。

	stu node1 = { 100,"lucy",NULL };
	stu node2 = { 100,"frank",NULL };
	stu node3 = { 100,"bob",NULL };
	stu node4 = { 100,"mike",NULL };
	stu node5 = { 100,"jay",NULL };


	//定义链表头
	struct stu* head = &node1;
	node1.next = &node2;
	node2.next = &node3;
	node3.next = &node4;
	node4.next = &node5;

	//遍历
	struct stu* pb = head;
	while (NULL != pb)
	{
		//访问数据
		cout << pb->name << " " << pb->num << endl;
		//pb移动到下一个节点位置
		pb = pb->next;
	}
	return 0;
}