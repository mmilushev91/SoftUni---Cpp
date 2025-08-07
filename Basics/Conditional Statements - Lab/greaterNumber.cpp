#include<iostream>

using std::cin;
using std::cout;

int main()
{
    int num1;
    cin >> num1;
    
    int num2;
    cin >> num2;
    
    if (num1 > num2) {
        cout << num1;
    } else {
        cout << num2;
    }
    
    return 0;
}
