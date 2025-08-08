// Online C++ Compiler - Build, Compile and Run your C++ programs online in your favorite browser

#include <iostream>
#include <cmath>

using namespace std;

int main() {
    int distance;
    cin >> distance;
    
    string dayTime;
    cin >> dayTime;
    
    double pricePerKm;
    double tax = 0;
    
    if (distance >= 100) {
        pricePerKm = 0.06;
        
    } else if (distance >= 20) {
        pricePerKm = 0.09;
        
    } else {
        tax = 0.70;
        
        if (dayTime == "day") {
            pricePerKm = 0.79;
            
        } else {
            pricePerKm = 0.90;
            
        }
    }
    
    double price = pricePerKm * distance + tax;
    
    cout.setf(ios::fixed);
    cout.precision(2);
    cout << price;
    
    return 0;
}
