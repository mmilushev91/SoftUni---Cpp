#include <iostream>

using namespace std;

int main()
{
    double commisionPercent = 0;

    string city;
    cin >> city;

    double turnover;
    cin >> turnover;

    if (city == "Sofia") {

        if (turnover >= 0 && turnover <= 500) {
            commisionPercent = 0.05;
        }
        else if (turnover >= 500 && turnover <= 1000) {
            commisionPercent = 0.07;
        }
        else if (turnover > 1000 && turnover <= 10000) {
            commisionPercent = 0.08;
        }
        else if (turnover > 10000) {
            commisionPercent = 0.12;
        }
    }
    else if (city == "Varna") {

        if (turnover >= 0 && turnover <= 500) {
            commisionPercent = 0.045;
        }
        else if (turnover >= 500 && turnover <= 1000) {
            commisionPercent = 0.075;
        }
        else if (turnover > 1000 && turnover <= 10000) {
            commisionPercent = 0.1;
        }
        else if (turnover > 10000) {
            commisionPercent = 0.13;
        }
    }
    else if (city == "Plovdiv") {

        if (turnover >= 0 && turnover <= 500) {
            commisionPercent = 0.055;
        }
        else if (turnover >= 500 && turnover <= 1000) {
            commisionPercent = 0.08;
        }
        else if (turnover > 1000 && turnover <= 10000) {
            commisionPercent = 0.12;
        }
        else if (turnover > 10000) {
            commisionPercent = 0.145;
        }
    }

    if (!commisionPercent) {
        cout << "error";
        return 1;
    }

    double commission = commisionPercent * turnover;

    cout.setf(ios::fixed);
    cout.precision(2);

    cout << commission;

}
