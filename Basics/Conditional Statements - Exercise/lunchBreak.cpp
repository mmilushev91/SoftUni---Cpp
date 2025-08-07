#include <iostream>
#include <cmath>

using std::cin;
using std::cout;
using std::ios;
using std::endl;
using std::string;
using std::getline;

int main() {
    string seriesName;
    getline(cin, seriesName);
    
    int episodeLength;
    cin >> episodeLength;
    
    int breakTime;
    cin >> breakTime;
    
    double lunchTime = breakTime / 8.0;
    double restTime = breakTime / 4.0;
    double takenTime = lunchTime + restTime;
    double leftTime = breakTime - takenTime;
    
    if (leftTime >= episodeLength) {
        cout << "You have enough time to watch " << 
            seriesName << " and left with " << ceil(leftTime - episodeLength) <<
            " minutes free time.";
            
    } else {
        cout << "You don't have enough time to watch " << seriesName <<
        ", you need " << ceil(episodeLength - leftTime) << " more minutes.";
        
    }

    return 0;
}
