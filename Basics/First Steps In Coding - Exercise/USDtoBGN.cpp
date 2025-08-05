#include <iostream>
using namespace std;

int main() {
    double usdPrice = 1.79549;
    double usds;
    cin >> usds;

    double bgns = usds * usdPrice;

    cout.setf(ios::fixed);
    cout.precision(2);
   
    cout << bgns;

    return 0;
}
