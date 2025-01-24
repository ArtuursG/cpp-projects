// Random Number Guessing Game

#include <iostream>
#include <cstdlib>
#include <ctime>
#include <vector>
#include <algorithm> // For sorting (std::sort)

int main() {
    srand(time(0));
    std::vector<int> numbers;

    std::cout << "Lottery Number Generator! \n";

    int i = 0;
    while (i < 5) {
        int randnum = rand() % 50 + 1;
        bool isDuplicate = false;

        for (int num : numbers) {
            if (num == randnum) {
                isDuplicate = true;
                break;
            }
        }

        if (!isDuplicate) {
            numbers.push_back(randnum);
            i++;
        }
    }
    
    std::sort(numbers.begin(), numbers.end());

    std::cout << "Generated Lottery Numbers: ";
    for (int num : numbers) {
        std::cout << num << " ";
    }
    std::cout << std::endl;

    return 0;
}