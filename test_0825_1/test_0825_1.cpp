#include<iostream>
using namespace std;

/*
水仙花数是指一个 3 位数，它的每个位上的数字的 3次幂之和等于它本身
例如：1^3 + 5^3+ 3^3 = 153
*/

int main()
{
    int num = 100;
    int a, b, c;      //用a,b,c,分别取三位数num的个位、十位、百位
    while (num < 1000)
    {
        a = num % 10;
        b = num / 10 % 10;
        c = num / 100;

        //判断num是否是水仙花数
        if (a * a * a + b * b * b + c * c * c == num)
        {
            cout << num << "是水仙花数！" << endl;
        }

        num++;
    }

    system("pause");

    return 0;
}
