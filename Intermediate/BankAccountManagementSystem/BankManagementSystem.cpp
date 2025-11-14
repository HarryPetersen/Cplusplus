#include <iostream>
#include <fstream>
#include <map>
using namespace std;

struct BankAccount {
    int AccountID;
    string Name;
    string AccountType;
    double Balance;
    int Pin;
};

int main(){
    map<int,BankAccount> Accounts;
    
}