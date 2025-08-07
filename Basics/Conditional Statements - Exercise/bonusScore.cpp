#include <iostream>

using std::cin;
using std::cout;
using std::endl;

int main() {
    int startPoints;
    cin >> startPoints;
    
    double bonusPoints;
    
    if (startPoints <= 100) {
        bonusPoints = 5;
        
    } else if (startPoints <= 1000) {
        bonusPoints = startPoints * 0.20;
        
    } else {
        bonusPoints = startPoints * 0.1;
    }
    
    if (startPoints % 2 == 0) {
        bonusPoints += 1;
        
    } else if (startPoints % 10 == 5) {
        bonusPoints += 2;
    }
    
    double totalPoints = startPoints + bonusPoints;
    
    cout << bonusPoints << endl;
    cout << totalPoints;
    
    return 0;
}
