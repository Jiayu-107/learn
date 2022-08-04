#include<iostream>
#include<vector>
#include<algorithm>
#include<functional>
using namespace std;

int main(int argc, char* argv[])
{
	vector<int> v1;
	v1.push_back(10);
	v1.push_back(40);
	v1.push_back(50);
	v1.push_back(30);
	v1.push_back(20);

	vector<int>::iterator ret;
	ret = find(v1.begin(), v1.end(), 10);

	//cout << ret << endl;
	if (ret != v1.end())
	{
		cout << *ret << endl;
	}

	return 0;
}