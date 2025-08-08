// Online C++ Compiler - Build, Compile and Run your C++ programs online in your favorite browser

#include <iostream>
#include <cmath>

using namespace std;

int main() {
    int days;
    cin >> days;
    
    int foodKgs;
    cin >> foodKgs;
    
    double dailyDogFood;
    cin >> dailyDogFood;
    
    double dailyCatFood;
    cin >> dailyCatFood;
    
    double dailyTurtleFood;
    cin >> dailyTurtleFood;
    
    double dailyTurtleFoodKg = dailyTurtleFood / 1000;
    double foodNeeded = (dailyDogFood + dailyCatFood + dailyTurtleFoodKg) * days;
    
    if (foodKgs >= foodNeeded) {
       int leftFood = floor(foodKgs - foodNeeded);
        
        cout << leftFood << " kilos of food left.";
        
    } else {
        int moreFoodNeeded = ceil(foodNeeded - foodKgs);
        
        cout << moreFoodNeeded << " more kilos of food are needed.";
    }

    return 0;
}
