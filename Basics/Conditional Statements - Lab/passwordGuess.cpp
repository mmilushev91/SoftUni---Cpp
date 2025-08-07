#include<iostream>

using std::cin;
using std::cout;
using std::string;

int main()
{
    string password = "s3cr3t!P@ssw0rd";
    
    string userEntry;
    cin >> userEntry;
    
    if (userEntry == password) {
        cout << "Welcome";
    } else {
        cout << "Wrong password!";
    }
    
    return 0;
}
