#include <iostream>
using namespace std;

int main(){
    int num = 0;
    cout << "Enter your number:";
    cin >> num;
    if (num & 1)
        cout << num << " is odd" << endl;
    else
        cout << num << " is even" << endl;

    return 0;
}