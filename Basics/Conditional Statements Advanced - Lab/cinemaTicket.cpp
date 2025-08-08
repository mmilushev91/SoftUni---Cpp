#include <iostream>

using namespace std;

int main() {
    string day;
    cin >> day;
    
    int ticketPrice;
    
    if (day == "Monday" || day == "Tuesday" ||
        day == "Friday") {
        ticketPrice = 12;
        
    } else if (day == "Wednesday" || day == "Thursday") {
        ticketPrice = 14;
        
    } else {
        ticketPrice = 16;
    }
    
    cout << ticketPrice;
    
    return 0;
}
