// Random Number Guessing Game

#include <iostream>
#include <cstdlib>
#include <ctime>

int main() {
    srand(time(0)); // Seed the random number generator

    int randnum = rand() % 10 + 1;
    int guess;
    int attempt = 0;

    std::cout << "Guess the number (1-10): \n";

    while (true) {
        std::cout << "Your guess: ";
        std::cin >> guess;
        attempt++;

        if (guess == randnum) {
            std::cout << "\nCorrect!!! You guessed the number in " << attempt << " attempts.\n";
            break;
        } else if (guess > randnum) {
            std::cout << "Too high! \n\n";
        } else {
            std::cout << "Too low! \n\n";
        }
    }

    return 0;
}