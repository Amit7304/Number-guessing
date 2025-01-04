#include <iostream>
#include <cstdlib>  
#include <ctime>    

using namespace std;

int main() {
    
    srand(time(0)); 
    int target = rand() % 100 + 1;
     int guess;
    int attempts = 0;
    cout << "Welcome to the Guessing Game!" << endl;
    cout << "I have selected a number between 1 and 100." << endl;
    cout << "Try to guess it!" << endl;
    do {
        cout << "Enter your guess: ";
        cin >> guess;
        attempts++;

        if (guess < target) {
            cout << "Too low! Try again." << endl;
        } else if (guess > target) {
            cout << "Too high! Try again." << endl;
        } else {
            cout << "Congratulations! You guessed the correct number " << target << " in " << attempts << " attempts!" << endl;
        }
      } while (guess != target);

    return 0;
}