#include <iostream>
using std::cin;
using std::cout;
using std::ios;

int main() {
    double euro = 1.94;
    
    double vegetablesKgPrice;
    cin >> vegetablesKgPrice;
    
    double fruitsKgPrice;
    cin >> fruitsKgPrice;
    
    double vegetablesKgCount;
    cin >> vegetablesKgCount;
    
    double fruitsKgCount;
    cin >> fruitsKgCount;
    
    double vegetablesPrice = vegetablesKgPrice * vegetablesKgCount;
    double fruitsPrice = fruitsKgPrice * fruitsKgCount;
    double bgnPrice = vegetablesPrice + fruitsPrice;
    double euroPrice = bgnPrice / euro;
    
    cout.setf(ios::fixed);
    cout.precision(2);
    
    cout << euroPrice;
    
    
    return 0;
}
