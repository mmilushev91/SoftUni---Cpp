#include <iostream>
#include <cmath>

using namespace std;

int main() {
    double magnoliasPrice = 3.25;
    int hyacinthsPrice = 4;
    double rosesPrice = 3.50;
    int cactiPrice = 8;
    
    int magnoliasCount;
    cin >> magnoliasCount;
    
    int hyacinthsCount;
    cin >> hyacinthsCount;
    
    int rosesCount;
    cin >> rosesCount;
    
    int cactiCount;
    cin >> cactiCount;
    
    double giftPrice;
    cin >> giftPrice;
    
    double income = magnoliasCount * magnoliasPrice + hyacinthsCount * hyacinthsPrice +
        rosesCount * rosesPrice + cactiCount * cactiPrice;
    
    income *= 0.95;
    
    if (income >= giftPrice) {
        cout << "She is left with " << floor(income - giftPrice) << " leva."; 
        
    } else {
        cout << "She will have to borrow " << ceil(giftPrice - income) << " leva."; 
    }

    return 0;
}
