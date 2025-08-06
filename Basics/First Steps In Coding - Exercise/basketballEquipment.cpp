#include <iostream>

int main() {
    int yearlyTax;
    std::cin >> yearlyTax;
    
    double shoes = yearlyTax - yearlyTax * 0.40;
    double outfit = shoes - shoes * 0.20;
    double ball = outfit / 4;
    double accessories = ball / 5;
    
    double totalPrice = yearlyTax + shoes + outfit + ball + accessories;
    std::cout << totalPrice;

    return 0;
}
