#include <iostream>
using std::cin;
using std::cout;
using std::ios;

int main() {
    double b1;
    cin >> b1;
    
    double b2;
    cin >> b2;
    
    double h;
    cin >> h;
    
    double area = (b1 + b2) * h / 2.0;
    
    cout.setf(ios::fixed);
    cout.precision(2);
    
    cout << area;

    return 0;
}
