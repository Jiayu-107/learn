#define _CRT_SECURE_NO_WARNINGS 1

#include <iostream>
using namespace std;

int main()
{
    int rows;

    cout << "��������: ";
    cin >> rows;

    for (int i = 1; i <= rows; ++i)
    {
        for (int j = 1; j <= i; ++j)
        {
            cout << "* ";
        }
        cout << "\n";
    }
    return 0;
}