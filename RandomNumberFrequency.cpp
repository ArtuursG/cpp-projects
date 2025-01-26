// Generate 20 random numbers between 1 and 10 and count how many times each number appears. Display the results.

#include <iostream>
#include <cstdlib>
#include <ctime>

int main() {
    
    srand(time(0));
    int num;
    
    int frequencies[10] = {0};
    
    std::cout << "Generated Numbers: ";
    
    for (int i = 0; i < 20; i++) { 
        int randnum = rand() % 10 + 1;
        std::cout << randnum << " ";
        frequencies[randnum - 1]++;
    }
    
    std::cout << "\n\nFrequency of Each Number:\n";
    
    for (int i = 0; i < 10; i++) {
        std::cout << (i + 1) << ": " << frequencies[i] << " times\n";
    }

    return 0;
}