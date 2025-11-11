#include <iostream>
using namespace std;

int main() {
    cout << "This is calculator program\n";
    float input1 = 0;
    cout << "Enter your first number:";
    cin >> input1;
    string operation = "";
    cout << "Enter the operation:";
    cin >> operation;
    float input2 = 0;
    cout << "Enter your second number:";
    cin >> input2;
    float total = 0;
    total = getoutput(input1,operation,input2);
    cout << "\n Enter your operation or enter x to quit:";
    cin >> operation;
    if (operation == "x"){
        return 0;
    }else{
        cout << "Enter your second number:";
        cin >> input2;
        total = getoutput(total,operation,input2);
    }
    return 0;
}

float getoutput(float input1, string operation, float input2){
    float total = 0;
    if(operation == "+"){
        total = input1 + input2;
        cout << total << "\n";
    }else if(operation == "-"){
        total = input1 - input2;
        cout << total << "\n";
    }else if(operation == "*"){
        total = input1 * input2;
        cout << total << "\n";
    }else if(operation == "/"){
        total = input1 / input2;
        cout << total << "\n";
    }
    return total;
}