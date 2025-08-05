#include <iostream>
using namespace std;

int main() {
    double pensPackagePrice = 5.8;
    double markersPackagePrice = 7.2;
    double detergentPrice = 1.2;

    int pensPackagesCount;
    cin >> pensPackagesCount;

    int markersPackagesCount;
    cin >> markersPackagesCount;

    int detergentLitters;
    cin >> detergentLitters;

    int discountPercent;
    cin >> discountPercent;

    double cost = pensPackagesCount * pensPackagePrice + 
        markersPackagesCount * markersPackagePrice + 
        detergentLitters * detergentPrice;
    
    double discount = cost * (discountPercent / 100.0);
    double finalPrice = cost - discount;

    cout << finalPrice;

    return 0;
}
