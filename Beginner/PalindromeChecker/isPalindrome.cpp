#include <iostream>
using namespace std;

bool isPalindrome(string word){
    for(int i = 0; i < word.length()/2; i ++){
        if(word[i] != word[word.length() - 1 - i]){
            return false;
        }
    }
    return true;
}

int main() {
    string word;
    cout << "Enter your word:";
    cin >> word;
    if(isPalindrome(word)){
        cout << "\nYour word is a Palindrome";
    }else{
        cout << "\nYour word is not a Palindrome";
    }
    return 0;
}

