#include <iostream>
#include <cmath>
#include <clocale>
#include "ModulesMykhailenko.h"

using namespace std;

int main() {
	char a, b;
	int x, y, z;

	setlocale(LC_ALL, "");

	cout << "\u00A9 ���������� ��������" << endl;

	cout << "������ x: ";
	cin >> x;
	cout << "������ y: ";
	cin >> y;
	cout << "������ z: ";
	cin >> z;
	cout << "������ a: ";
	cin >> a;
	cout << "������ b: ";
	cin >> b;

	cout << boolalpha << (a + 7 == b) << endl;

	cout << "x = " << dec << x << ", � �������������� ������ ��������: " << hex << x << endl;
	cout << "y = " << dec << y << ", � �������������� ������ ��������: " << hex << y << endl;
	cout << "z = " << dec << z << ", � �������������� ������ ��������: " << hex << z << endl;

	cout << "s = " << s_calculation(x, y, z) << endl;
}
