#include<iostream>
#include<stack>
using namespace std;

int main(int argc, char* argv[])
{
	stack<int> s1;
	s1.push(10);
	s1.push(20);
	s1.push(30);
	s1.push(40);
	s1.push(50);
	cout << "stack size = " << s1.size() << endl;
	cout << s1.top() << endl;
	s1.pop();
	cout<<s1.top()<<endl;
	if (s1.empty())
	{
		cout << "stack is empty" << endl;
	}
	else
	{
		cout << "stack size = " << s1.size() << endl;
		while (!s1.empty())
		{
			cout << s1.top() << " ";
			s1.pop();
		}
	}
	return 0;
}