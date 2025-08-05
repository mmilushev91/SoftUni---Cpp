#include <iostream>
using namespace std;

int main() {
    int bookPages;
    cin >> bookPages;

    int pagesPerHour;
    cin >> pagesPerHour;

    int days;
    cin >> days;

    int hours = bookPages / days / pagesPerHour;

    cout << hours;

    return 0;
}
