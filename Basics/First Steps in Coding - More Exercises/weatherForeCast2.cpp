#include <iostream>
using std::cin;
using std::cout;
using std::string;

int main() {
    double degrees;
    cin >> degrees;
    if (degrees < 5 || degrees > 35) {
        cout << "unknown";
    } else if (degrees < 12) {
        cout << "Cold";
    } else if (degrees < 15) {
        cout << "Cool";
    } else if (degrees <= 20) {
        cout << "Mild";
    } else if (degrees < 26) {
        cout << "Warm";
    } else {
        cout << "Hot";
    } 
    
    return 0;
}
