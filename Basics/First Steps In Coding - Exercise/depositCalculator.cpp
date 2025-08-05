#include <iostream>
#include <math.h>
using namespace std;

int main() {

    double deposit;
    cin >> deposit;

    int duration;
    cin >> duration;

    double yearlyInterestRate;
    cin >> yearlyInterestRate;

    double monthlyInterestRate  = (deposit * (yearlyInterestRate / 100)) / 12;

    double finalDeposit = deposit + (monthlyInterestRate * duration);
    cout << finalDeposit;


    return 0;
}
