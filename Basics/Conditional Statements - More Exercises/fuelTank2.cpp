#include <iostream>

using namespace std;

int main() {
    double gasoline = 2.22;
    double diesel = 2.33;
    double gas = 0.93;
    
    string fuel;
    cin >> fuel;
    
    double quantity;
    cin >> quantity;
    
    string card;
    cin >> card;
    
    double priceLitter;
    
    if (fuel == "Gasoline") {
        priceLitter = gasoline;
        
        if (card == "Yes") {
            priceLitter -= 0.18;
        }
        
    } else if (fuel == "Diesel") {
        priceLitter = diesel;
        
        if (card == "Yes") {
            priceLitter -= 0.12;
        }
        
    } else {
        priceLitter = gas;
        
        if (card == "Yes") {
            priceLitter -= 0.08;
        }
    }
    
    double price = quantity * priceLitter;
    
    if (quantity >= 20 && quantity <= 25) {
        price *= 0.92;
        
    } else if (quantity > 25) {
        price *= 0.90;
    }
    
    cout.setf(ios::fixed);
    cout.precision(2);
    
    cout << price << " lv.";

    return 0;
}
