#include <iostream>
#include <string>
using namespace std;

int main() {
    double dogFoodPackagePrice = 2.5;
    int catFoodPackagePrice = 4;

    int dogFoodPackageCount;
    cin >> dogFoodPackageCount;

    int catFoodPackageCount;
    cin >> catFoodPackageCount;

    double finalPrice = dogFoodPackageCount * dogFoodPackagePrice + catFoodPackageCount * catFoodPackagePrice;

    cout << finalPrice << " lv.";

    return 0;
}
