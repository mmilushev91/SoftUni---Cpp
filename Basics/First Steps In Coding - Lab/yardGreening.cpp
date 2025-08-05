#include <iostream>
#include <string>
using namespace std;

int main() {
    double pricePerSqM = 7.61;
    double discountPercent = 0.18;

    double sqMToGreen;
    cin >> sqMToGreen;

    double priceBeforeDiscount = sqMToGreen * pricePerSqM;
    double discount = priceBeforeDiscount * discountPercent;
    double finalPrice = priceBeforeDiscount - discount;

    cout << "The final price is: " << finalPrice << " lv." << endl;
    cout << "The discount is: " << discount << " lv.";

    return 0;
}
