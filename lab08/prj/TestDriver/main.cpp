#include "ModulesMykhailenko.h"
#include <iostream>
#include <limits>
#include <clocale>

using namespace std;

bool test(int x, int y, int z, float s) {
	if ((s != NAN && s_calculation(x, y, z) == s) || (isnan(s) && isnan(s_calculation(x, y, z))))
		return true;
	else
		cout << "Очікуваний результат: " << s << " Отриманий результат: " << s_calculation(x, y, z) << endl;
		return false;
}

int main() {
	int x[5] = {7, 2, 9, 0, 7};
	int y[5] = {2, 45, 0, 0, 5};
	int z[5] = {1, 6, 1, 0, 4};
	float s[5] = {7.84054470062256, 268.186920166016, 3.841470956802375, 1, 35775.44140625};

	cout.precision(std::numeric_limits<double>::digits10);

	for (int i = 0; i < 5; i++) {
		test(x[i], y[i], z[i], s[i])
		? cout << "Test " << i << " (x = " << x[i] << ", y = " << y[i] << ", z = " << z[i] << ", s = " << s[i] << ") " << " passed"
		: cout << "Test " << i << " (x = " << x[i] << ", y = " << y[i] << ", z = " << z[i] << ", s = " << s[i] << ") " << " failed";
		cout << endl;
	}

	return 0;
}
