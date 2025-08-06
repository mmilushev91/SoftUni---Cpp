#include <iostream>
using std::cin;
using std::cout;
using std::ios;
using std::endl;

int main() {
    double greenPainExpenceSqM = 3.4;
    double redPainExpenceSqM = 4.3;
    
    double x;
    cin >> x;
    
    double y;
    cin >> y;
    
    double h;
    cin >> h;
    
    double sideSides = x * y * 2;
    double frontSides = (x * x) * 2 - 2.4;
    
    double greenPaintTotalSqM = frontSides + (sideSides - 4.5);
    double greenPaintTotalExpense = greenPaintTotalSqM / greenPainExpenceSqM;
    
    double roofFrontSides = (0.5 * x * h) * 2;

    double redPaintTotalSqM = sideSides + roofFrontSides;
    double redPaintTotalExpense = redPaintTotalSqM / redPainExpenceSqM;
    
    cout.setf(ios::fixed);
    cout.precision(2);
    
    cout << greenPaintTotalExpense << endl;
    cout << redPaintTotalExpense;
    
    return 0;
}
