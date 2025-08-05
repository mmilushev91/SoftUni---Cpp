#include <iostream>
#include <string>
using namespace std;

int main() {
    string name;
    cin >> name;

    int projectsCount;
    cin >> projectsCount;

    int timePerProject = 3;
    int timeNeeded = projectsCount * timePerProject;

    cout << "The architect " << name << " will need " << timeNeeded << " hours to complete " << projectsCount << " project/s.";
 
    return 0;
}
