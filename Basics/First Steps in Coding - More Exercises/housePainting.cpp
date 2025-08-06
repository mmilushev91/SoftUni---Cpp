#include <iostream>
using std::cin;
using std::cout;
using std::ios;

int main() {
    double greenPainExpenceSqM = 3.4;
    double redPainExpenceSqM = 4.3;
    
    double x;
    cin >> x;
    
    double y;
    cin >> y;
    
    double h;
    cin >> h;
    
    double sideSides = (x * y - 2.25) * 2;
    double frontSides = (x * x) * 2 - 2.4;
    double greenPaintTotalSqM = frontSides + sideSides;
    double greenPaintTotalExpense = greenPaintTotalSqM / greenPainExpenceSqM;
  
    cout << greenPaintTotalExpense;

    return 0;
}
