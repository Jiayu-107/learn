#include<iostream>
using namespace std;

struct stu
{
	//������
	int num;
	char name[32];

	//ָ����
	struct stu* next;
};

int main(int argc, char* argv)
{
	//struct������ǿ
	//c�ж���ṹ�������Ҫ����struct�ؼ��֣�c++����Ҫ�� c�еĽṹ��ֻ�ܶ����Ա���������ܶ����Ա
	//������c++�����Զ����Ա������Ҳ���Զ����Ա������

	stu node1 = { 100,"lucy",NULL };
	stu node2 = { 100,"frank",NULL };
	stu node3 = { 100,"bob",NULL };
	stu node4 = { 100,"mike",NULL };
	stu node5 = { 100,"jay",NULL };


	//��������ͷ
	struct stu* head = &node1;
	node1.next = &node2;
	node2.next = &node3;
	node3.next = &node4;
	node4.next = &node5;

	//����
	struct stu* pb = head;
	while (NULL != pb)
	{
		//��������
		cout << pb->name << " " << pb->num << endl;
		//pb�ƶ�����һ���ڵ�λ��
		pb = pb->next;
	}
	return 0;
}