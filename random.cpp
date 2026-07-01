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
        cout << "Guess the number: ";
        cin >> guess;
        attempts++;
        if (attempts > 7) {
            cout << "You ran out of attempts!" << endl;
            cout << "Want to play again? (y/n): ";
            char answer;
            cin >> answer;
            if (answer == 'y') {
                attempts = 0;
                continue;
            } else {
                return 0;
            }
        }
        if (guess > secretNumber) {
            cout << "Too high!" << endl;
        } else if (guess < secretNumber) {
            cout << "Too low!" << endl;
        } else {
            cout << "You got it!" << endl;
            cout << "Attempts: " << attempts;
            return 0;
        }
    }
}