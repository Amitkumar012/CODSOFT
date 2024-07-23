

//////////////////////////////////////        NUMBER - GUESSING - GAME           //////////////////////////////////////




#include <iostream>
#include <cstdlib>  
#include <ctime>  

using namespace std;

int main() {
    srand(static_cast<unsigned int>(time(0))); 

    int secretNumber = rand() % 100 + 1;  
    int guess;
    int attempts = 0;

    cout << "Welcome to the Guess the Number game!!!!" << endl;
    cout << "I have selected a number between 1 and 100." << endl;

    while (true) {
        cout << "Enter your guess: ";
        cin >> guess;
        attempts++;

        if (guess < secretNumber) {
            cout << "Too low! Try again." << endl;
        } else if (guess > secretNumber) {
            cout << "Too high! Try again." << endl;
        } else {
            cout << "Congratulations! you have  guessed the number " << secretNumber << " correctly!" << endl;
            cout << "Number of attempts:-- " << attempts << endl;
            break;  
        }
    }

    return 0;
}
