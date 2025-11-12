#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main(){
    for (int i = 0; i < 5; i++){
        srand(time(0));
        int number = (rand() % 5) + 1;
        int guess;
        cout << "Guess a number (1-5):";
        cin >> guess;
        if (guess == number){
            cout << "Congratulations the number was " << guess << endl;
        }else{
            cout << "Unlucky, the number was " << number << " And you guessed " << guess << endl;
        }
    }
    
    return 0;
}