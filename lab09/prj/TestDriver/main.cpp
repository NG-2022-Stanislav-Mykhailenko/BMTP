#include "ModulesMykhailenko.h"
#include <iostream>
#include <clocale>

using namespace std;

bool test_1(float value, int months, float interest, float paid) {
	Deposit deposit;
	deposit = getPayment(value, months);
	if (deposit.totalInterest == interest && deposit.monthlyInterestPaid == paid)
		return true;
	else
		cout << "���������� ���������: ���� �������: " << interest << ", ���� ��������� ������: " << paid << endl << "��������� ���������: ���� �������: " << deposit.totalInterest << ", ���� ��������� ������: " << deposit.monthlyInterestPaid << endl;
		return false;
}

bool test_2(int slovakSize, int frenchSize, string internationalSize) {
	Size size = getSize(slovakSize);
	if (size.french == frenchSize && size.international == internationalSize)
		return true;
	else
		cout << "���������� ���������: ����� �� �������� �������: " << frenchSize << ", ����� �� ���������� ��������: " << internationalSize << endl << "��������� ���������: ����� �� �������� �������: " << size.french << ", ����� �� ���������� ��������: " << size.international << endl;
		return false;
}

bool test_3(float n, int count) {
	int result = t9_3(n);
	if (result == count)
		return true;
	else {
		cout << "���������� ���������: " << count << endl << "��������� ���������: " << result << endl;
		return false;
	}
}

int main() {
	float value[5] = {1000, 1000.25, 10, 5000, 10000};
	int months[5] = {6, 12, 6, 12, 6};
	float interest[5] = {5.5, 13, 5.5, 13, 5.5};
	float paid[5] = {9.17, 10.84, 0.09, 54.17, 91.67};

	int slovakSizes[5] = {6, 7, 8, 9, 10};
	int frenchSizes[5] = {2, 3, 4, 5, 6};
	string internationalSizes[5] = {"S", "M", "L", "XL", "XXL"};

	int n[5] = {3, 5, 13, 26, 100};
	int result_3[5] = {2, 2, 3, 2, 4};

	setlocale(LC_ALL, "");

	for (int i = 0; i < 3; i++) {
		switch (i) {
			case 0:
				for (int j = 0; j < 5; j++) {
					test_1(value[j], months[j], interest[j], paid[j])
					? cout << "Test " << i + 1 << "." << j + 1 << " (���� ��������: " << value[j] << ", ������� ������: " << months[j] << ", ���� �������: " << interest[j] << ", ���� ��������� ������: " << paid[j] << ") " << " passed"
					: cout << "Test " << i + 1 << "." << j + 1 << " (���� ��������: " << value[j] << ", ������� ������: " << months[j] << ", ���� �������: " << interest[j] << ", ���� ��������� ������: " << paid[j] << ") " << " failed";
					cout << endl;
				}
				break;
			case 1:
				for (int j = 0; j < 5; j++) {
					test_2(slovakSizes[j], frenchSizes[j], internationalSizes[j])
					? cout << "Test " << i + 1 << "." << j + 1 << " (����� �� ���������� ��������: " << slovakSizes[j] << ", ����� �� �������� �������: " << frenchSizes[j] << ", ����� �� ���������� ��������: " << internationalSizes[j] << ") " << " passed"
					: cout << "Test " << i + 1 << "." << j + 1 << " (����� �� ���������� ��������: " << slovakSizes[j] << ", ����� �� �������� �������: " << frenchSizes[j] << ", ����� �� ���������� ��������: " << internationalSizes[j] << ") " << " failed";
					cout << endl;
				}
				break;
			case 2:
				for (int j = 0; j < 5; j++) {
					test_3(n[j], result_3[j])
					? cout << "Test " << i + 1 << "." << j + 1 << " (n = " << n[j] << ", ��������� = " << result_3[j] << ") " << " passed"
					: cout << "Test " << i + 1 << "." << j + 1 << " (n = " << n[j] << ", ��������� = " << result_3[j] << ") " << " failed";
					cout << endl;
				}
				break;
		}

	}

	return 0;
}
