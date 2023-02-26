#include <cmath>
#include <string>
#include "ModulesMykhailenko.h"

using namespace std;

float s_calculation(int x, int y, int z) {
	return fabs(sin(fabs(y-pow(z,2)))+sqrt(x)-sqrt(pow(y*z, x)+(y/(2*M_PI))));
}

Deposit getPayment(float value, int months) {
	Deposit deposit;
	if (months == 6 || months == 12) {
		float interest;
		deposit.totalInterest = months == 12 ? 13 : 11/(float)2;
		interest = deposit.totalInterest / 100 / months;
		deposit.monthlyInterestPaid = round(value*interest*100)/100;
	} else {
		deposit.totalInterest = -1;
		deposit.monthlyInterestPaid = -1;
	}
	return deposit;
}

Size getSize(int slovakSize) {
	Size size;
	if (slovakSize >= 6 && slovakSize <= 10) {
		size.french = slovakSize - 4;
		switch (slovakSize)
		{
			case 6:
				size.international = "S";
				break;
			case 7:
				size.international = "M";
				break;
			case 8:
				size.international = "L";
				break;
			case 9:
				size.international = "XL";
				break;
			case 10:
				size.international = "XXL";
				break;
			default:
				size.international = "Error";
		}
	} else {
		size.french = -1;
		size.international = "Error";
	}
	return size;
}

int t9_3(int number) {
	unsigned int count = 0;
	if (number > 0 || number <= 7483650) {
		bool set = number & 1;
		while (number) {
			count += (number & 1) == set;
			number >>= 1;
		}
	} else {
		return -1;
	}
	return count;
}
