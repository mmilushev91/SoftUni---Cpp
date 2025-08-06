#include <iostream>
using std::cin;
using std::cout;
using std::ios;

int main() {
    double degreesCelsius;
    cin >> degreesCelsius;
    
    double degreesFahrenheit = (degreesCelsius  * 9 / 5.0) + 32;
    
    cout.setf(ios::fixed);
    cout.precision(2);
    cout << degreesFahrenheit;
    
    return 0;
}
