#include <iostream>

using namespace std;

int main() {
    string product;
    cin >> product;
    
    string productType;

    if (product == "banana" || product == "apple" ||
        product == "kiwi" || product == "cherry" || product == "lemon"
        || product == "grapes") {
        product = "fruit";   
 
    } else if (product == "tomato" || product == "cucumber"
        || product == "pepper" || product == "carrot") {
        product = "vegetable";
        
    } else {
        product = "unknown";
    }
    
    cout << product;
 
    return 0;
}
