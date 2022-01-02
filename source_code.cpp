#include <iostream>

using namespace std;

int main() {
    int randomNumber = rand() % 21;
    int userGuess;
    cout << "Guess a number between 0 and 20: ";
    cout << randomNumber;
    for (int Tries = 1; randomNumber != userGuess;) {
        int Logs[20];
        cin >> userGuess;
        int Logs[Tries] = userGuess;
        if (userGuess == randomNumber) {
           cout << "Correct!" << "\n";
        }
        else {
            cout << "wrong xd, the number was: " << randomNumber << "\n";
        }
    }
    
    return 0;
}
