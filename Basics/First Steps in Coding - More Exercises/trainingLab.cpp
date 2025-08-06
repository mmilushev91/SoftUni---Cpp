#include <iostream>
using std::cin;
using std::cout;
using std::ios;

int main() {
    double length;
    cin >> length;
    
    double width;
    cin >> width;
    
    int workPlaceLength = 120;
    int workPlaceWidth = 70;
    
    int columns = length * 100 / workPlaceLength;
    int columnDesks = (width * 100 - 100) / workPlaceWidth;
    
    int totalSeats = columns * columnDesks - 3;
    cout << totalSeats;
    
    return 0;
}
