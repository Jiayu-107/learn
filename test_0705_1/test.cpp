#define _CRT_SECURE_NO_WARNINGS 1

#include<iostream>
#include<cmath>
#include<Windows.h>
using namespace std;
//�ؼ���ʽ��x^2+y^2-1)^3-x^2*y^3=0,С�����ʱ���������ڲ����������ʱ�����ⲿ 
void big_heart() {//���ĵĴ�ӡ��һ��һ�д�ӡ����
	double x_1, y_1, m_1, n_1;
	for (y_1 = 1.5; y_1 > -1.5; y_1 -= 0.1) { //���͵���󳤶� 
		for (x_1 = -1.5; x_1 <= 1.5; x_1 += 0.05) {//���͵������ 
			m_1 = x_1 * x_1 + y_1 * y_1 - 1;
			n_1 = pow(m_1, 3) - pow(x_1, 2) * pow(y_1, 3);
			n_1 < 0 ? cout << 'x' : cout << ' ';
		}
		Sleep(100);
		cout << endl;
	}
}
void big_heart_2() { //���ĵĴ�ӡ��Ѹ�ٵ���ɰ��ĵĴ�ӡ
	double x_1, y_1, m_1, n_1;
	for (y_1 = 1.5; y_1 > -1.5; y_1 -= 0.1) { //���͵���󳤶� 
		for (x_1 = -1.5; x_1 <= 1.5; x_1 += 0.05) {//���͵������ 
			m_1 = x_1 * x_1 + y_1 * y_1 - 1;
			n_1 = pow(m_1, 3) - pow(x_1, 2) * pow(y_1, 3);
			n_1 < 0 ? cout << 'x' : cout << ' ';
		}
		cout << endl;
	}
}
void small_heart() { //С���ĵĴ�ӡ
	double x, y, m, n;
	for (y = 3.0; y > -3.0; y -= 0.2) { //���͵���󳤶� 
		for (x = -3.0; x <= 3.0; x += 0.1) {//���͵������ 
			m = x * x + y * y - 1;
			n = pow(m, 3) - pow(x, 2) * pow(y, 3);
			n < 0 ? cout << 'x' : cout << ' ';
		}
		cout << endl;
	}
}
//Ϊ�����ۺ����ʣ����ش�ӡʱ�Ĺ��
HANDLE han = GetStdHandle(-11);
void hide() {
	CONSOLE_CURSOR_INFO cursor;
	cursor.bVisible = 0;
	cursor.dwSize = 1;
	SetConsoleCursorInfo(han, &cursor);
}
int main() {  //���������
	hide();
	system("color C"); //��ɫ����
	big_heart();
	int a = 1;
	while (1) {
		system("cls");
		if (a % 2 == 0) {
			small_heart();
			Sleep(400); //����ͣ��ʱ��
		}
		else {
			big_heart_2();
			Sleep(100); //����ͣ��ʱ��
		}
		a++;
	}
	return 0;
}