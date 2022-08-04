#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;
int main(int argc, char* aargv[])
{
	vector<int> v1;
	v1.push_back(10);
	v1.push_back(20);
	v1.push_back(30);
	v1.push_back(40);
	v1.push_back(50);

	bool ret = binary_search(v1.begin(), v1.end(),30);

	if (ret)
	{
		cout << "find" << endl;
	}

	return 0;
}