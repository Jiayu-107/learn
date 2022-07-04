#define _CRT_SECURE_NO_WARNINGS 1

#include<iostream>

using namespace std;

/*typedef 作用的步骤
  1，先用 已有的类型 定义一个普通变量
  2，用 别名 替换 变量名
  3， 在整个表达式最前方 加typedef
*/

/*注意事项：
	不能创建新类型
*/

int main(int argc, char* argv[])
{	
	//INT32 就是 int 的别名 
	typedef int INT32;

	int data1 = 10;//已有的类型任然有效
	INT32 data2 = 20;

	//步骤
	//int arr[5];
	//int MYARRAY[5];
	typedef int MYARRAY[5];

	MYARRAY arr = { 0 };

	INT32 i = 0;
	for (; i < 5; i++)
	{
		arr[i] = i;
		cout << arr[i] << " ";
	}
	printf("\n");

	cout << "##" << '\n' << "##" << endl;
	cout << "##" << '\t' << "##" << endl;
	cout << "##" << '\r' << "##" << endl;
	
	cout << '\a' << endl;
	return 0;
}