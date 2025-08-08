#include <iostream>

using namespace std;

int main() {
    int num;
    cin >> num;
    
    if (!((num >= 100 && num <= 200) || num == 0)) {
        cout << "invalid";
    }
 
    return 0;
}
