#define _USE_MATH_DEFINES

#include <iostream>
#include <cmath>
using std::cin;
using std::cout;
using std::ios;
using std::endl;

//A = πr²

int main() {
    double radius;
    cin >> radius;
    
    double area = M_PI * pow(radius, 2);
    double perimeter = 2 * M_PI * radius;
    
    cout.setf(ios::fixed);
    cout.precision(2);
    
    cout << area << endl;
    cout << perimeter;
    
    return 0;
}
