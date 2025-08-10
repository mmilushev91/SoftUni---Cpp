#include <iostream>

using namespace std;

int main() {
	int budget;
	cin >> budget;

	string season;
	cin >> season;

	int groupCount;
	cin >> groupCount;

	double price;

	if (season == "Spring") {
		price = 3000;
	}
	else if (season == "Winter") {
		price = 2600;
	}
	else {
		price = 4200;
	}

	if (groupCount <= 6) {
		price *= 0.90;
	}
	else if (groupCount < 12) {
		price *= 0.85;
	}
	else {
		price *= 0.75;
	}

	if (groupCount % 2 == 0 && season != "Autumn") {
		price *= 0.95;
	}

	cout.setf(ios::fixed);
	cout.precision(2);

	if (budget >= price) {
		cout << "Yes! You have " << budget - price << " leva left.";
	}
	else {
		cout << "Not enough money! You need " << price - budget << " leva.";
	}

	return 0;
}
