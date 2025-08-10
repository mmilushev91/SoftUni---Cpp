#include <iostream>

using namespace std;

int main()
{
	string shoes, outfit;

	int degrees;
	cin >> degrees;

	string dayTime;
	cin >> dayTime;

	if (degrees >= 10 && degrees <= 18) {

		if (dayTime == "Morning") {
			outfit = "Sweatshirt";
			shoes = "Sneakers";
		}
		else {
			outfit = "Shirt";
			shoes = "Moccasins";
		}
	
	}
	else if (degrees > 18 && degrees <= 24) {

		if (dayTime == "Afternoon") {
			outfit = "T-Shirt";
			shoes = "Sandals";
		}

		else {
			outfit = "Shirt";
			shoes = "Moccasins";
		}

	}
	else if (degrees >= 25) {

		if (dayTime == "Morning") {
			outfit = "T-Shirt";
			shoes = "Sandals";
		}
		else if (dayTime == "Afternoon") {
			outfit = "Swim Suit";
			shoes = "Barefoot";
		}
		else {
			outfit = "Shirt";
			shoes = "Moccasins";
		}
	}

	cout << "It's " << degrees << " degrees, get your " << outfit << " and " << shoes << ".";

	return 0;
}
