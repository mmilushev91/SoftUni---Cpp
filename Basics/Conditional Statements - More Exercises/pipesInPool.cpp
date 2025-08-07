#include <iostream>
using namespace std;

int main() {
	int poolVolume;
	cin >> poolVolume;
	
	int p1;
	cin >> p1;
	
	int p2;
	cin >> p2;
	
	double hours;
	cin >> hours;
	
	double fillVolume = (p1 + p2) * hours;
	double p1VolumePercent = (double)p1 * hours / fillVolume * 100;
	double p2VolumePercent = (double)p2 * hours / fillVolume * 100;
	double fillVolumePercent = (double)fillVolume / poolVolume * 100;
	
	cout.setf(ios::fixed);
	cout.precision(2);
	
    if (fillVolume > poolVolume) {
        cout << "For " << hours <<" hours the pool overflows with " << fillVolume - poolVolume << " liters.";
    } else {
        cout << "The pool is " << fillVolumePercent <<"% full. Pipe 1: " <<p1VolumePercent << "%. Pipe 2: " << p2VolumePercent <<"%.";
    }

}
