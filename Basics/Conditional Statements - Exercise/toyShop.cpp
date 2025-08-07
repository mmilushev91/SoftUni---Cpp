#include <iostream>

using std::cin;
using std::cout;
using std::ios;

int main() {
    double puzzlePrice = 2.6;
    int talkingDollPrice = 3;
    double teddyBearPrice = 4.10;
    double minionsPrice = 8.20;
    int truckPrice = 2;
    
    double tourPrice;
    cin >> tourPrice;
    
    int puzzleCount;
    cin >> puzzleCount;
    
    int talkingDollsCount;
    cin >> talkingDollsCount;
    
    int tedyBearsCount;
    cin >> tedyBearsCount;
    
    int minionsCount;
    cin >> minionsCount;
    
    int truckCount;
    cin >> truckCount;
    
    double income = puzzleCount * puzzlePrice +
        talkingDollsCount * talkingDollPrice +
        tedyBearsCount * teddyBearPrice +
        minionsCount * minionsPrice + 
        truckCount * truckPrice;
    
    int toysCount = puzzleCount + talkingDollsCount +
        tedyBearsCount + minionsCount + truckCount;
    
    
    if (toysCount >= 50) {
        income -= income * 0.25;
    }
    
    income -= income * 0.10;
    
    cout.setf(ios::fixed);
    cout.precision(2);
    
    if (income >= tourPrice) {
        cout << "Yes! " << income - tourPrice <<  " lv left.";
    } else {
        cout << "Not enough money! " << tourPrice - income <<  " lv needed.";
    }
    
    return 0;
}
