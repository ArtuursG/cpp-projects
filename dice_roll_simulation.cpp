// Write a program that simulates rolling two six-sided dice. Print the result of each die and the total value.

#include <iostream>
#include <cstdlib>
#include <ctime>

int main() {
    srand(time(0)); // Seed the random number generator

    int dice1, dice2;

    std::cout << "Rolling two six-sided dice...\n";
    
    dice1 = rand() % 6 + 1;
    dice2 = rand() % 6 + 1;

    for (int i = 0; i < 5; ++i) {
    dice1 = rand() % 6 + 1;
    dice2 = rand() % 6 + 1;
    std::cout << "Roll " << (i + 1) << ": Dice 1 = " << dice1 
              << ", Dice 2 = " << dice2 
              << ", Total = " << (dice1 + dice2) << "\n";
    }

    return 0;
}