#include <iostream>
#include <ctype.h>

using namespace std;

int main() {
    int randomNumber = rand() % 21;
    int Logs[20];
    string userInput;
    userInput = (tolower(userInput));
    int userGuess = stoi(userInput);
    cout << "Guess a number between 0 and 20: ";
    cout << randomNumber;
    for (int Tries = 1; randomNumber != userGuess;) {
        cin >> userInput;
        Logs[Tries] = userInput;
        switch(userInput) {
            case "restart":
            
            break;
            case "logs":
            
            break;
            case "stop":
            
            break;
            default:
            break;
        }
        if (userGuess == randomNumber) {
           cout << "Correct!" << "\n";
        }
        else {
            cout << "wrong xd, the number was: " << randomNumber << "\n";
            if (userGuess != Logs[Tries]) {
                Tries++;
            }
        }
    }
    
    return 0;
}
