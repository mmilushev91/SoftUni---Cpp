#include <iostream>

using namespace std;

int main() {
    string product;
    cin >> product;
    
    string city;
    cin >> city;
    
    double quantity;
    cin >> quantity;
    
    double productPrice;
    
    if (city == "Sofia") {
        
        if (product == "coffee") {
            productPrice = 0.50;
        }
        
        else if (product == "water") {
            productPrice = 0.80;
            
        } else if (product == "beer") {
            productPrice = 1.20;
            
        } else if (product == "sweets") {
            productPrice = 1.45;
            
        } else  {
            productPrice = 1.60;
        }
      
    } else if (city == "Plovdiv") {
        
        if (product == "coffee") {
            productPrice = 0.40;
        }
        
        else if (product == "water") {
            productPrice = 0.70;
            
        } else if (product == "beer") {
            productPrice = 1.15;
            
        } else if (product == "sweets") {
            productPrice = 1.30;
            
        } else  {
            productPrice = 1.50;
        }
      
    } else if (city == "Varna") {
        
        if (product == "coffee") {
            productPrice = 0.45;
        }
        
        else if (product == "water") {
            productPrice = 0.70;
            
        } else if (product == "beer") {
            productPrice = 1.10;
            
        } else if (product == "sweets") {
            productPrice = 1.35;
            
        } else  {
            productPrice = 1.55;
        }
    }
    
    double price = quantity * productPrice;
    
    cout << price;
    return 0;
}
