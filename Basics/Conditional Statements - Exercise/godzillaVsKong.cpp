#include <iostream>

using std::cin;
using std::cout;
using std::ios;
using std::endl;

int main() {
    double budget;
    cin >> budget;
    
    int statistsCount;
    cin >> statistsCount;
    
    double outfitPrice;
    cin >> outfitPrice;
    
    double outfitTotalPrice = statistsCount * outfitPrice;
    double decor = budget * 0.10;
    
    if (statistsCount > 150) {
        outfitTotalPrice -= outfitTotalPrice * 0.10;
    }
    
    double totalPrice = outfitTotalPrice + decor;
    
    cout.setf(ios::fixed);
    cout.precision(2);
    
    if (budget >= totalPrice) {
        cout << "Action!" << endl;
        cout << "Wingard starts filming with "<< budget - totalPrice << " leva left.";
    }
    
    else {
        cout << "Not enough money!" << endl;
        cout <<"Wingard needs " << totalPrice - budget << " leva more.";
    }
    
    return 0;
}
