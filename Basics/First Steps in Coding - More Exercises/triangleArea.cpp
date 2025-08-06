#include <iostream>
using std::cin;
using std::cout;
using std::ios;

int main() {
    double a;
    cin >> a;
    
    double h;
    cin >> h;
    
    double area = a * h / 2.0;
    
    cout.setf(ios::fixed);
    cout.precision(2);
    
    cout << area;

    return 0;
}
