#include <iostream>

using namespace std;

int main() {
    double age;
    cin >> age;
    
    string sex;
    cin >> sex;
    
    string title;
    
    if (sex == "m") {
        
        if (age >= 16) {
            title = "Mr.";
            
        } else {
            title = "Master";
        }
        
    } else {
        
        if (age >= 16) {
            title = "Ms.";
            
        } else {
            title = "Miss";
        }
    }
    
    cout << title;
    return 0;
}
