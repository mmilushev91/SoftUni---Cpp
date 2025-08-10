#include <iostream>

using namespace std;

int main()
{
	int premiere = 12;
	double normal = 7.5;
	int discount = 5;

	string type;
	cin >> type;

	int rows;
	cin >> rows;

	int columns;
	cin >> columns;

	double price;

	int seats = rows * columns;

	if (type == "Premiere") {
		price = seats * premiere;
	}
	else if (type == "Normal") {
		price = seats * normal;
	}
	else {
		price = seats * discount;
	}

	cout.setf(ios::fixed);
	cout.precision(2);

	cout << price << " leva";
}
