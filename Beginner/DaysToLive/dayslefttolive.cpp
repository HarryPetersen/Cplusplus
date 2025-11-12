#include <iostream>
using namespace std;

int main() {
    int years = 95;
    const int daysPerYear = 365;
    float age = 0.0;
    cout << "How old are you?:";
    cin >> age;
    float yearsleft = years - age;
    float daysleft = yearsleft * daysPerYear;
    cout << "Assuming you live to 95 you have " << daysleft << " day's left to live";
    return 0;
}