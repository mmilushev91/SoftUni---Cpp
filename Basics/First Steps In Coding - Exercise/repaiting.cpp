#include <iostream>
using namespace std;

int main() {
    double nylonPriceSm = 1.50;
    double painPriceLitter = 14.50;
    double solventPriceLitter = 5;
    
    int nylonQuantity;
    cin >> nylonQuantity;
    
    int paintLitters;
    cin >> paintLitters;
    
    int solventLitters;
    cin >> solventLitters;
    
    int workHours;
    cin >> workHours;
    
    double nylonPrice = (nylonQuantity + 2) * nylonPriceSm;
    double paintPrice = (paintLitters + paintLitters * 0.1)
        * painPriceLitter;
    double solventPrice = solventLitters * solventPriceLitter;
   
    double materialsPrice = nylonPrice + paintPrice + solventPrice + 0.40;
    
    double hourlyWorkPrice = materialsPrice * 0.30;
    double finalPrice = materialsPrice + (hourlyWorkPrice * workHours);
    cout << finalPrice;
    
    return 0;
}
