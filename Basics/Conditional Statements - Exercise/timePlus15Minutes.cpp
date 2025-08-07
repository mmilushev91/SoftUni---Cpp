#include <iostream>

using std::cin;
using std::cout;
using std::endl;

int main() {
    int hours;
    cin >> hours;
    
    int minutes;
    cin >> minutes;
    
    minutes += 15;
    
    if (minutes > 59) {
        hours += 1;
        minutes -= 60;
        
        if (hours > 23) {
            hours = 0;
        }
    }
    
    cout << hours << ':';
    
    if (minutes < 10) {
        cout << 0;
    }
    
    cout << minutes;
    
    return 0;
}
