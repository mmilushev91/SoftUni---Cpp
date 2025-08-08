#include <iostream>
#include <cmath>

using namespace std;

int main() {
    int x;
    cin >> x;
    
    double y;
    cin >> y;
    
    int wineNeeded;
    cin >> wineNeeded;
    
    int workersCount;
    cin >> workersCount;
    
    double grapeHarvest = x * y;
    double grapeForWine = grapeHarvest * 0.40;
    double wineProduced = grapeForWine / 2.5;
    
    if (wineProduced >= wineNeeded) {
        double leftWine = wineProduced - wineNeeded;
        cout << "Good harvest this year! Total wine: "
            << floor(wineProduced) << " liters." << endl;
            
        cout << ceil(leftWine) << " liters left -> " << ceil(leftWine / workersCount) << " liters per person.";    
    
    } else {
        cout << "It will be a tough winter! More " << 
            floor(wineNeeded - wineProduced) <<
                " liters wine needed.";
    }
    
    return 0;
}
