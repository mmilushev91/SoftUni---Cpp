#define _USE_MATH_DEFINES

#include <iostream>
#include <cmath>

using std::cin;
using std::cout;
using std::string;
using std::ios;

int main()
{
    string figure;
    cin >> figure;
    
    double area;
    
    if (figure == "square") {
        double side;
        cin >> side;
        
        area = pow(side, 2);
        
    } else if (figure == "rectangle") {
        double a;
        cin >> a;
        
        double b;
        cin >> b;
        
        area = a * b;
        
    } else if (figure == "circle") {
        double radius;
        cin >> radius;
        
        area = M_PI * pow(radius, 2);
        
    } else {
        double a;
        cin >> a;
        
        double h;
        cin >> h;
        
        area = 0.5 * a * h;
    }
    
    cout.setf(ios::fixed);
    cout.precision(3);
    
    cout << area;
    
    return 0;
}
