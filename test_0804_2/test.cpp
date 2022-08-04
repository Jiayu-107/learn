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
	ret = find_if(v1.begin(), v1.end(), bind2nd(greater<int>(), 30));
	if (v1.end() != ret)
	{
		cout << *ret << endl;
	}
	return 0;
}