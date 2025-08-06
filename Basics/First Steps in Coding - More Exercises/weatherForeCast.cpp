#include <iostream>
using std::cin;
using std::cout;
using std::string;

int main() {
    string input;
    cin >> input;
    
    if (input == "sunny") {
        cout << "It's warm outside!";
    } else {
        cout << "It's cold outside!";
    }
    
    return 0;
}
