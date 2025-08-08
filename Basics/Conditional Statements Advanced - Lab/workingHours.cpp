#include <iostream>

using namespace std;

int main() {
    int hour;
    cin >> hour;
    
    string day;
    cin >> day;
    
    if (day != "Sunday" && hour >= 10 && hour <= 18) {
        cout << "open";
        
    } else {
        cout << "closed";
    }
    return 0;
}
