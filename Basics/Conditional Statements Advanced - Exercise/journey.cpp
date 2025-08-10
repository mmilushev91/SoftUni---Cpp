#include <iostream>

using namespace std;

int main() {
	double budget;
	cin >> budget;

	string season;
	cin >> season;

	string destination, vacationType;
	double price;

	if (budget <= 100) {
		destination = "Bulgaria";

		if (season == "summer") {
			vacationType = "Camp";
			price = budget * 0.30;
		}
		else {
			vacationType = "Hotel";
			price = budget * 0.70;
		}
	}
	else if (budget <= 1000) {
		destination = "Balkans";

		if (season == "summer") {
			vacationType = "Camp";
			price = budget * 0.40;
		}
		else {
			vacationType = "Hotel";
			price = budget * 0.80;
		}
	}
	else {
		destination = "Europe";
		vacationType = "Hotel";
		price = budget * 0.90;
	}
	cout.setf(ios::fixed);
	cout.precision(2);

	cout << "Somewhere in " << destination << endl;
	cout << vacationType << " - " << price;
	return 0;
}
