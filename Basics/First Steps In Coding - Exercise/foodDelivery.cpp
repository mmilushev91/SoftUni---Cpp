#include <iostream>
using namespace std;

int main() {
    double chickenMenuPrice = 10.35;
    double fishMenuPrice = 12.40;
    double vegetarianMenuPrice = 8.15;
    double deliveryPrice = 2.50;
    
    int chickenMenusCount;
    cin >> chickenMenusCount;
    
    int fishMenusCount;
    cin >> fishMenusCount;
    
    int vegeterianMenusCount;
    cin >> vegeterianMenusCount;
    
    double chickenPrice = chickenMenusCount * chickenMenuPrice;
    double fishPrice = fishMenusCount * fishMenuPrice;
    double vegeterianPrice = vegeterianMenusCount * vegetarianMenuPrice;
    
    double menusPrice = chickenPrice + fishPrice + vegeterianPrice;
    double desertPrice = menusPrice * 0.20;
    double totalPrice = menusPrice + desertPrice + deliveryPrice;
    
    cout << totalPrice;
    return 0;
}
