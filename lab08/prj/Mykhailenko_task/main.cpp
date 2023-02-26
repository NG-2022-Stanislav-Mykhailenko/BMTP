#include <iostream>
#include <cmath>
#include <clocale>
#include "ModulesMykhailenko.h"

using namespace std;

int main() {
	char a, b;
	int x, y, z;

	setlocale(LC_ALL, "");

	cout << "\u00A9 ћихайленко —тан≥слав" << endl;

	cout << "¬вед≥ть x: ";
	cin >> x;
	cout << "¬вед≥ть y: ";
	cin >> y;
	cout << "¬вед≥ть z: ";
	cin >> z;
	cout << "¬вед≥ть a: ";
	cin >> a;
	cout << "¬вед≥ть b: ";
	cin >> b;

	cout << boolalpha << (a + 7 == b) << endl;

	cout << "x = " << dec << x << ", у ш≥стнадц€тков≥й систем≥ численн€: " << hex << x << endl;
	cout << "y = " << dec << y << ", у ш≥стнадц€тков≥й систем≥ численн€: " << hex << y << endl;
	cout << "z = " << dec << z << ", у ш≥стнадц€тков≥й систем≥ численн€: " << hex << z << endl;

	cout << "s = " << s_calculation(x, y, z) << endl;
}
