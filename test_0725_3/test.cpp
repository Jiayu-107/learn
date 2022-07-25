#include<iostream>
#include"data.hpp"
using namespace std;
int main(int argc, char* argvp[])
{
	Data<int, char> ob(10, 'a');
	ob.ShowData();

	return 0;
}