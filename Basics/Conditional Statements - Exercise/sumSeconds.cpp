#include <iostream>

using std::cin;
using std::cout;

int main() {
    int time1;
    cin >> time1;
    
    int time2;
    cin >> time2;
    
    int time3;
    cin >> time3;
    
    int totalTime = time1 + time2 + time3;
    int minutes = totalTime / 60;
    int seconds = totalTime % 60;
    
    cout << minutes << ':';
    
    if (seconds < 10) {
        cout << "0";
    }
    
    cout << seconds;
    
    return 0;
}
