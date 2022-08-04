#include<iostream>
#include<vector>
#include<algorithm>
#include<functional>
using namespace std;

int main(int argc, char* argv[])
{
	vector<int> v1;
	v1.push_back(10);
	v1.push_back(20);
	v1.push_back(30);
	v1.push_back(30);
	v1.push_back(20);

	vector<int>::iterator ret;
	ret = adjacent_find(v1.begin(), v1.end());
	if (v1.end() != ret)
	{
		cout << *ret << endl;
	}
	return 0;
}