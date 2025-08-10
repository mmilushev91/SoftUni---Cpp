// ConsoleApplication2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

using namespace std;

int main()
{
    double pricePerKg = 0;

    string fruit;
    cin >> fruit;

    string day;
    cin >> day;

    double quantity;
    cin >> quantity;

    if (day == "Monday" || day == "Tuesday" || day == "Wednesday" || day == "Thursday" || day == "Friday") {
        
         if (fruit == "banana") {
            pricePerKg = 2.50;
         }
         else if (fruit == "apple") {
             pricePerKg = 1.20;
         }
         else if (fruit == "orange") {
            pricePerKg = 0.85;
         } 
         else if (fruit == "grapefruit") {
                pricePerKg = 1.45;
         }
         else if (fruit == "kiwi") {
            pricePerKg = 2.70;

         }
         else if (fruit == "pineapple") {
             pricePerKg = 5.50;
         }
         else if (fruit == "grapes") {
             pricePerKg = 3.85;
         }
    
    }
    else if (day == "Saturday" || day == "Sunday") {

        if (fruit == "banana") {
            pricePerKg = 2.70;
        }
        else if (fruit == "apple") {
            pricePerKg = 1.25;
        }
        else if (fruit == "orange") {
            pricePerKg = 0.90;
        }
        else if (fruit == "grapefruit") {
            pricePerKg = 1.60;
        }
        else if (fruit == "kiwi") {
            pricePerKg = 3.00;

        }
        else if (fruit == "pineapple") {
            pricePerKg = 5.60;
        }
        else if (fruit == "grapes") {
            pricePerKg = 4.20;
        }
    }

    if (!pricePerKg) {
        cout << "error";
    }
    else {
        double price = quantity * pricePerKg;

        cout.setf(ios::fixed);
        cout.precision(2);

        cout << price;
    }
    

}
