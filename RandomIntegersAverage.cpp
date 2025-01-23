// Write a program that generates 10 random integers between 1 and 50 and calculates their average.
#include <iostream>
#include <cstdlib>
#include <ctime>

int main() {
    srand(time(0)); // Seed the random number generator

    double sum = 0;

    std::cout << "Generating 10 random numbers between 1 and 50:\n";

    for (int i = 0; i < 10; i++) {
        int random = std::rand() % 50 + 1; // Generate a random number between 1 and 50

        // Print the equation showing the random number being added to the sum
        std::cout << "Random number " << (i + 1) << ": " << random << "\n";
        std::cout << "Equation: " << sum << " + " << random;
        sum += random; // Add the random number to the sum
        std::cout << " = " << sum << "\n\n"; // Print the updated sum
    }

    // Calculate the average
    double average = sum / 10;

    // Output the final results
    std::cout << "Total sum of numbers: " << sum << "\n";
    std::cout << "Average of the numbers: " << average << "\n";

    return 0;
}