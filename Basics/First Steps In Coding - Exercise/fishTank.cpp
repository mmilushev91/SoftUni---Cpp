#include <iostream>

int main() {
    int length;
    std::cin >> length;
    
    int width;
    std::cin >> width;
    
    int height;
    std::cin >> height;
    
    double takenPlacePercent;
    std::cin >> takenPlacePercent;
    
    double poolTotalVolume = (length * width * height ) / 1000.0;
    
    double takenSpace = poolTotalVolume * (takenPlacePercent / 100);
    double freeVolume = poolTotalVolume - takenSpace;
    
    std::cout << freeVolume;

    return 0;
}
