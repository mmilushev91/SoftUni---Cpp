#include <iostream>

using namespace std;

int main() {
    string fuel;
    cin >> fuel;
    
    double tankLv;
    cin >> tankLv;
    
    char end;
    
    if (fuel != "Diesel" && fuel != "Gasoline" && fuel != "Gas") {
        cout << "Invalid fuel!";
        
        return 1;
    }
    
    if (tankLv >= 25) {
        cout << "You have enough ";
        end = '.';
        
    } else {
        cout << "Fill your tank with ";
        end = '!';
    }
    
    cout << (char)tolower(fuel[0]);
    
    for (int i = 1; i < fuel.length(); i++) {
        cout << fuel[i];
    }
    
    cout << end;

    return 0;
}
