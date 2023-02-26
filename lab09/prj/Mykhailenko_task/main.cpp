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
		cout << "¬вед≥ть v, n, m або q: ";
		cin >> data;

		switch (data) {
			case 'v':
				int x, y, z;
				cout << "¬вед≥ть x: ";
				cin >> x;
				cout << "¬вед≥ть y: ";
				cin >> y;
				cout << "¬вед≥ть z: ";
				cin >> z;
				cout << "s = " << s_calculation(x, y, z) << endl;
				break;
			case 'n':
				float value;
				int months;
				Deposit deposit;
				cout << "¬вед≥ть суму депозиту: ";
				cin >> value;
				cout << "¬вед≥ть строк д≥њ угоди у м≥с€ц€х: ";
				cin >> months;
				deposit = getPayment(value, months);
				if (deposit.totalInterest == -1 || deposit.monthlyInterestPaid == -1)
					cout << "¬ведено неправильн≥ дан≥." << endl;
				else
					cout << "—ума в≥дсотк≥в: " << deposit.totalInterest << ", сума щом≥с€чних виплат: " << deposit.monthlyInterestPaid << endl;
				break;
			case 'm': {
				int slovakSize;
				Size size;

				cout << "¬вед≥ть розм≥р за словацькою системою: ";
				cin >> slovakSize;

				size = getSize(slovakSize);
				if (size.french == -1 || size.international == "Error")
					cout << "¬ведено неправильн≥ дан≥." << endl;
				else
					cout << "–озм≥р за системою ‘ранц≥њ: " << size.french << endl << "–озм≥р за м≥жнародною системою: " << size.international << endl;
				break;
			}
			case 'q':
				int n;
				int result;
				cout << "¬вед≥ть N: ";
				cin >> n;
				result = t9_3(n);
				if (result == -1)
					cout << "¬ведено неправильн≥ дан≥." << endl;
				else
					cout << "–езультат: " << result << endl;
				break;
			default:
				cout << "\a¬ведено неправильн≥ дан≥." << endl;
		}

		cout << "¬вед≥ть w або W дл€ виходу ≥з програми: ";
		cin >> exit;

		if (tolower(exit) == 'w')
			break;
	}

	return 0;
}
