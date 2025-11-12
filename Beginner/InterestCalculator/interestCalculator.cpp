#include <iostream>
using namespace std;

int main() {
    double start, rate, time, interest;
    cout << "Enter start amount: ";
    cin >> start;
    cout << "Enter Rate of interest (% per year): ";
    cin >> rate;
    cout << "Enter Time (in years): ";
    cin >> time;
    interest = (start * rate * time) / 100;
    cout << "\nSimple Interest = " << interest << endl;

    return 0;
}
