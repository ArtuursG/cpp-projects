#include <iostream>
#include <cstdlib>
#include <ctime>

int main() {
    srand(time(0)); // Seed the random number generator

    const std::string characters = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789!@#$%^&*()-+/";
    std::string password;

    std::cout << "Random password generator that generates an 8-character alphanumeric password:\n";

    for (int i = 0; i < 12; i++) {
        char randomChar = characters[std::rand() % characters.length()];
        password += randomChar;
    }

    std::cout << "Generated password: " << password << "\n";

    return 0;
}