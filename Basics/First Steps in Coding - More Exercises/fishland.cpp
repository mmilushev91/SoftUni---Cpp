#include <iostream>
using std::cin;
using std::cout;
using std::ios;

int main() {
    double musselsKgPrice = 7.50;
    
    double mackerelKgPrice;
    cin >> mackerelKgPrice;
    
    double spratKgPrice;
    cin >> spratKgPrice;
    
    double bonitoKgCount;
    cin >> bonitoKgCount;
    
    double horseМackerelKgCount;
    cin >> horseМackerelKgCount;
    
    double musslesKgCount;
    cin >> musslesKgCount;
    
    double bonitoKgPrice = mackerelKgPrice + mackerelKgPrice * 0.60;
    double horseМackerelKgPrice = spratKgPrice + spratKgPrice * 0.80;
    double bonitoPrice = bonitoKgPrice * bonitoKgCount;

    double horseМackerelPrice = horseМackerelKgPrice * horseМackerelKgCount;
    double musselsPrice = musselsKgPrice * musslesKgCount;
    
    double totalPrice = bonitoPrice + horseМackerelPrice + musselsPrice;
    
    cout.setf(ios::fixed);
    cout.precision(2);
    
    cout << totalPrice;
    
    return 0;
}
