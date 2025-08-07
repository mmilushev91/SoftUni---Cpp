#include <iostream>
#include <cmath>

using std::cin;
using std::cout;
using std::ios;
using std::endl;

int main() {
    int videoCardPrice = 250;
    
    double budget;
    cin >> budget;
    
    int videoCardsCount;
    cin >> videoCardsCount;
    
    int processorsCount;
    cin >> processorsCount;
    
    int ramCount;
    cin >> ramCount;
    
    double videoCardsPrice = videoCardsCount * videoCardPrice;
    double procesorPrice = videoCardsPrice * 0.35;
    double ramPrice = videoCardsPrice * 0.10;
    
    double price = videoCardsPrice + processorsCount * procesorPrice +
        ramCount * ramPrice;
    
    if (videoCardsCount > processorsCount) {
        price *= 0.85;
    }
    
    cout.setf(ios::fixed);
    cout.precision(2);

    if (budget >= price) {
        cout << "You have " << budget - price << " leva left!";
    } else {
        cout << "Not enough money! You need " << price - budget << " leva more!";
    }
  
    return 0;
}
