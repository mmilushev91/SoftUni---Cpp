#include <iostream>
#include <cmath>

using std::cin;
using std::cout;
using std::ios;
using std::endl;

int main() {
    double record;
    cin >> record;
    
    double distance;
    cin >> distance;
    
    double timePerMeter;
    cin >> timePerMeter;
    
    double delay = floor(distance / 15) * 12.5;

    double totalTime = distance * timePerMeter  + delay;
    
    cout.setf(ios::fixed);
    cout.precision(2);
  
    if (totalTime < record) {
        cout << "Yes, he succeeded! The new world record is " << totalTime << " seconds.";
    } else {
        cout << "No, he failed! He was " << totalTime - record << " seconds slower.";
    }
    
    return 0;
}
