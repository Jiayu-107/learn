#define _CRT_SECURE_NO_WARNINGS 1

#include<iostream>
using namespace std;
//�ṹ������Ԫ�ص�ָ�����
struct Stu
{
	int num;
	char name[30]; 
};

void intputStuArray(Stu* arr, int sz)
{
	cout << "������" << sz << "��ѧ������Ϣ(ѧ�� ����)" << endl;
	int i = 0;
	for (i = 0; i < sz; i++)
	{
		cin >> (arr + i)->num >> (arr + i)->name;
	}
}

void sortStuArray(Stu* arr, int sz)
{
	int i = 0;
	for (i = 0; i < sz - 1; i++)
	{
		int j = 0;
		for (j = 0; j < sz - i - 1; j++)
		{
			//����С��������
			if ((arr + j)->num > (arr + j + 1)->num)
			{
				Stu tmp = *(arr + j);
				*(arr + j) = arr[j + 1];
				arr[j + 1] = tmp;
			}
		}
	}
}

void outputStuArray(Stu* arr, int sz)
{
	int i = 0;
	for (i = 0; i < sz; i++)
	{
		cout << arr[i].num << " " << arr[i].name << endl;
	}

}

int main(int argc, char* argv)
{
	Stu arr[5];
	memset(arr, 0, sizeof(arr));
	int sz = sizeof(arr) / sizeof(arr[0]);

	//��װ������ȡ��������
	intputStuArray(arr, sz);

	//�Խṹ�����鰴ѧ������
	sortStuArray(arr, sz);

	//����ṹ��Ԫ�ص�����
	outputStuArray(arr, sz);


	return 0;
}