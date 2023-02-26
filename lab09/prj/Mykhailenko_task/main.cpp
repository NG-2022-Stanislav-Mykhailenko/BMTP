#include <iostream>
#include <cctype>
#include <clocale>
#include "ModulesMykhailenko.h"

using namespace std;

int main() {
	setlocale(LC_ALL, "");
	while (true) {
		char data;
		char exit;
		cout << "������ v, n, m ��� q: ";
		cin >> data;

		switch (data) {
			case 'v':
				int x, y, z;
				cout << "������ x: ";
				cin >> x;
				cout << "������ y: ";
				cin >> y;
				cout << "������ z: ";
				cin >> z;
				cout << "s = " << s_calculation(x, y, z) << endl;
				break;
			case 'n':
				float value;
				int months;
				Deposit deposit;
				cout << "������ ���� ��������: ";
				cin >> value;
				cout << "������ ����� 䳿 ����� � ������: ";
				cin >> months;
				deposit = getPayment(value, months);
				if (deposit.totalInterest == -1 || deposit.monthlyInterestPaid == -1)
					cout << "������� ���������� ���." << endl;
				else
					cout << "���� �������: " << deposit.totalInterest << ", ���� ��������� ������: " << deposit.monthlyInterestPaid << endl;
				break;
			case 'm': {
				int slovakSize;
				Size size;

				cout << "������ ����� �� ���������� ��������: ";
				cin >> slovakSize;

				size = getSize(slovakSize);
				if (size.french == -1 || size.international == "Error")
					cout << "������� ���������� ���." << endl;
				else
					cout << "����� �� �������� �������: " << size.french << endl << "����� �� ���������� ��������: " << size.international << endl;
				break;
			}
			case 'q':
				int n;
				int result;
				cout << "������ N: ";
				cin >> n;
				result = t9_3(n);
				if (result == -1)
					cout << "������� ���������� ���." << endl;
				else
					cout << "���������: " << result << endl;
				break;
			default:
				cout << "\a������� ���������� ���." << endl;
		}

		cout << "������ w ��� W ��� ������ �� ��������: ";
		cin >> exit;

		if (tolower(exit) == 'w')
			break;
	}

	return 0;
}
