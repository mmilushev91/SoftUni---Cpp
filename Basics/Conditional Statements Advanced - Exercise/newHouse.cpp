#include <iostream>

using namespace std;

int main() {
	string flower;
	cin >> flower;

	int number;
	cin >> number;

	int budget;
	cin >> budget;

	double price;

	if (flower == "Roses") {
		price = 5;

		if (number > 80) {
			price *= 0.90;
		}
	}
	else if (flower == "Dahlias") {
		price = 3.8;

		if (number > 90) {
			price *= 0.85;
		}
	}
	else if (flower == "Tulips") {
		price = 2.8;

		if (number > 80) {
			price *= 0.85;
		}
	}
	else if (flower == "Narcissus") {
		price = 3;

		if (number < 120) {
			price *= 1.15;
		}
	}
	else {
		price = 2.5;

		if (number < 80) {
			price *= 1.2;
		}
	}
	
	double finalPrice = number * price;

	cout.setf(ios::fixed);
	cout.precision(2);

	if (budget >= finalPrice) {
		cout << "Hey, you have a great garden with " << number << " " << flower <<
			" and " << budget - finalPrice << " leva left.";
	}
	else {
		cout << "Not enough money, you need " << finalPrice - budget << " leva more.";
	}

	return 0;
}
