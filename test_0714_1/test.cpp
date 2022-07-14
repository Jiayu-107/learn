#define _CRT_SECURE_NO_WARNINGS 1

#include<iostream>
using namespace std;
//结构体数组元素的指针变量
struct Stu
{
	int num;
	char name[30]; 
};

void intputStuArray(Stu* arr, int sz)
{
	cout << "请输入" << sz << "个学生的信息(学号 名字)" << endl;
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
			//按从小到大排序
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

	//封装函数获取键盘输入
	intputStuArray(arr, sz);

	//对结构体数组按学号排序
	sortStuArray(arr, sz);

	//输出结构体元素的内容
	outputStuArray(arr, sz);


	return 0;
}