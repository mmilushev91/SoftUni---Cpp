#include <iostream>
#include <math.h>
using namespace std;

int main() {
    double pi = 3.14;

    double radians;
    cin >> radians;

    double degrees = round(radians * 180 / pi);

    cout << degrees;

    return 0;
}
