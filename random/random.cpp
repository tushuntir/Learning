#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;

int main() {
    srand(time(0));
    int secretNumber = rand() % 100 + 1;
    int attempts = 0;

    while (true) {
        int guess;
        cout << "Guess the number (1-100): ";
        cin >> guess;
        attempts++;

        if (guess > secretNumber) {
            cout << "Too high!" << endl;
        } else if (guess < secretNumber) {
            cout << "Too low!" << endl;
        } else {
            cout << "You got it in " << attempts << " attempts!" << endl;
            cout << "Play again? (y/n): ";
            char answer;
            cin >> answer;
            if (answer == 'y') {
                secretNumber = rand() % 100 + 1;
                attempts = 0;
            } else {
                return 0;
            }
        }

        if (attempts >= 7) {
            cout << "Out of attempts! The number was " << secretNumber << "." << endl;
            cout << "Play again? (y/n): ";
            char answer;
            cin >> answer;
            if (answer == 'y') {
                secretNumber = rand() % 100 + 1;
                attempts = 0;
            } else {
                return 0;
            }
        }
    }
}
