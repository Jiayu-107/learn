#define _CRT_SECURE_NO_WARNINGS 1

#include <iostream>
using namespace std;

void Regulation(string a, string b) {
    string r1 = "Rock", r2 = "Paper", r3 = "Scissors";
    if ((a == r1 && b == r3) || (a == r2 && b == r1) || (a == r3 && b == r2))//Player1胜出的所有情况
        cout << "Player1" << endl;
    else if (a == b)
        cout << "Tie" << endl;
    else
        cout << "Player2" << endl;
}

int main() {
    int n;
    cin >> n;
    string a[n], b[n];
    for (int i = 0; i < n; i++) {
        cin >> a[i] >> b[i];
    }
    for (int i = 0; i < n; i++)
        Regulation(a[i], b[i]);
    return 0;
}