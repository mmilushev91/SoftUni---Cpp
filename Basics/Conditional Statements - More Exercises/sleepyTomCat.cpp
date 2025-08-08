// Online C++ Compiler - Build, Compile and Run your C++ programs online in your favorite browser

#include <iostream>
#include <cmath>

using namespace std;

int main() {
    int tomNorm = 30000;
    
    int offworkDays;
    cin >> offworkDays;
    
    int workDays = 365 - offworkDays;
    int playedTime = workDays * 63 + offworkDays * 127;
    int difference = abs(tomNorm - playedTime);
    int hours =  difference / 60;
    int minutes = difference % 60;

    if (tomNorm >= playedTime) {
        cout << "Tom sleeps well" << endl;
        cout << hours << " hours and " << minutes <<
            " minutes less for play";
            
    } else {
        cout << "Tom will run away" << endl;
        cout << hours << " hours and " << minutes <<
            " minutes more for play";
    }
    
    return 0;
}
