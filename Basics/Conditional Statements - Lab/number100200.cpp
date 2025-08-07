#include<iostream>

using std::cin;
using std::cout;
using std::string;

int main()
{
    int num;
    cin >> num;
    
    if (num < 100) {
        cout << "Less than 100";
    } else if (num <= 200) {
        cout << "Between 100 and 200";
    } else {
        cout << "Greater than 200";
    }
    
    return 0;
}
