// Online C++ Compiler - Build, Compile and Run your C++ programs online in your favorite browser

#include <iostream>

using namespace std;

int main() {
    int num;
    cin >> num;
    
    if (num >= -100 && num <= 100 && num != 0) {
        cout << "Yes";
        
    } else {
        cout << "No";
    }
    return 0;
}
