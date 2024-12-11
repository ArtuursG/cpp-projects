#include <iostream>
#include <cstdlib>
#include <ctime>
#include <string>

int main() {
    int choice;
    int lives = 3;
    int risk;
    std::string answer;
    std::srand(std::time(0));

    // Introduction
    std::cout << "You are an archaeologist seeking the Relic of Eternity, an artifact rumored to control time.\n";
    std::cout << "The path is filled with perilous traps, treacherous terrain, and moral choices.\n";
    std::cout << "You begin the journey with a limited number of lives. Your decisions will determine whether you survive, succeed, or fail in your quest.\n\n";

    // --- The Library ---
    std::cout << "--- The Library ---\n";
    std::cout << "You find the ancient map, but it is partially burned. To decipher it, you must choose: \n";
    std::cout << "  1. Explore the library further (50% chance to lose a life).\n";
    std::cout << "  2. Take the map as it is and proceed without clues.\n";
    std::cout << "Your choice: ";

    std::cin >> choice;
    while (choice < 1 || choice > 2){
        std::cout << "Invalid choice. Please choose 1 or 2: ";
        std::cin >> choice;
    }

    if (choice == 1) {
        risk = std::rand() % 2; // 50% chance
        if (risk == 0) {
            std::cout << "The floor collapses! You lose 1 life.\n";
            lives--;
        } else {
            std::cout << "You narrowly avoid the collapsing floor and find additional clues!\n";
        }
    } else {
        std::cout << "You decide to take the map as it is and proceed cautiously.\n";
    }

    if (lives <= 0) {
        std::cout << "\nYou have no lives left. Game over.\n";
        return 0;
    }

    // --- Dangerous Environments ---
    std::cout << "\n--- Dangerous Environments ---\n";
    std::cout << "You must choose your path:\n";
    std::cout << "  1. Jungle (solve a riddle or lose 1 life).\n";
    std::cout << "  2. Desert (50% chance to gain or lose a life).\n";
    std::cout << "  3. Tundra (fight wolves or flee).\n";
    std::cout << "Your choice: ";

    std::cin >> choice;
    while (choice < 1 || choice > 3) {
        std::cout << "Invalid choice. Please choose 1, 2, or 3: ";
        std::cin >> choice;
    }

    switch (choice) {
        case 1: // Jungle
            std::cout << "\nYou fall into a trap! Solve this riddle to escape:\n";
            std::cout << "I speak without a mouth and hear without ears. What am I?\n";
            std::cout << "Answer (in lowercase): ";
            std::cin >> answer;

            if (answer == "echo") {
                std::cout << "Correct! You escape unharmed.\n";
            } else {
                std::cout << "Wrong! The trap injures you. You lose 1 life.\n";
                lives--;
            }
            break;

        case 2: // Desert
            std::cout << "\nYou face a deadly sandstorm. Do you:\n";
            std::cout << "  1. Wait it out (lose 1 life).\n";
            std::cout << "  2. Push forward (50% chance to gain or lose a life).\n";
            std::cout << "Your choice: ";

            std::cin >> choice;
            while (choice < 1 || choice > 2) {
                std::cout << "Invalid choice. Please choose 1 or 2: ";
                std::cin >> choice;
            }

            if (choice == 1) {
                std::cout << "The heat drains you. You lose 1 life.\n";
                lives--;
            } else {
                if (std::rand() % 100 < 50) { // 50% chance
                    std::cout << "The storm intensifies! You lose 1 life.\n";
                    lives--;
                } else {
                    std::cout << "You find an oasis and gain 1 life!\n";
                    lives++;
                }
            }
            break;

        case 3: // Tundra
            std::cout << "\nYou encounter a pack of wolves. Do you:\n";
            std::cout << "  1. Fight (50% chance to lose 1 life).\n";
            std::cout << "  2. Flee (lose 1 life).\n";
            std::cout << "Your choice: ";

            std::cin >> choice;
            while (choice < 1 || choice > 2) {
                std::cout << "Invalid choice. Please choose 1 or 2: ";
                std::cin >> choice;
            }

            if (choice == 1) {
                if (std::rand() % 100 < 50) { // 50% chance
                    std::cout << "The wolves overpower you. You lose 1 life.\n";
                    lives--;
                } else {
                    std::cout << "You scare the wolves away and escape unharmed.\n";
                }
            } else {
                std::cout << "You flee but suffer frostbite. You lose 1 life.\n";
                lives--;
            }
            break;
    }

    if (lives <= 0) {
        std::cout << "\nYou have no lives left. Game over.\n";
        return 0;
    }

    // --- The Final Trial ---
    std::cout << "\n--- The Final Trial ---\n";
    std::cout << "Before reaching the temple, you face a final trial set by ancient protectors.\n";
    std::cout << "A voice echoes: 'Choose wisely, for this decision will shape your destiny.'\n";
    std::cout << "You see three paths ahead:\n";
    std::cout << "  1. A path shrouded in darkness, promising great treasure but unknown dangers.\n";
    std::cout << "  2. A narrow bridge over a deadly chasm, requiring courage and balance.\n";
    std::cout << "  3. A glowing door with an inscription: 'Only the kind-hearted may pass.'\n";
    std::cout << "Which path do you choose? ";

    std::cin >> choice;
    while (choice < 1 || choice > 3){
      std::cout << "Invalid choice. Please choose 1, 2, or 3: ";
      std::cin >> choice;
    }

    // Path decisions
    if (choice == 1) {
        risk = std::rand() % 2;
        if (risk == 0) {
            std::cout << "You avoid the trap and find a chest of gold. No lives lost!\n";
        } else {
            std::cout << "The trap wounds you as you escape. You lose 1 life.\n";
            lives--;
        }
    } else if (choice == 2) {
        risk = std::rand() % 4;
        if (risk < 3) {
            std::cout << "You sprint across the bridge and make it just in time. No lives lost!\n";
        } else {
            std::cout << "The wind knocks you down. You lose 1 life as you barely recover.\n";
            lives--;
        }
    } else if (choice == 3) {
        std::cout << "You offer provisions. The door opens, and you lose 1 life.\n";
        lives--;
    }

    if (lives <= 0) {
        std::cout << "\nYou have no lives left. The final trial has defeated you. Game over.\n";
        return 0;
    }

    // --- The Temple ---
    std::cout << "\n--- The Temple ---\n";
    if (lives > 2) {
        std::cout << "The guardian deems you worthy. You secure the relic and leave it untouched.\n";
        std::cout << "Heroic Ending: The relic is safe, and you are celebrated as a hero.\n";
    } else if (lives == 2) {
        std::cout << "The guardian allows you to claim the relic but warns of its burden.\n";
        std::cout << "Selfish Ending: You wield the relics power, but it changes you forever.\n";
    } else {
        std::cout << "The guardian sees your weakness and denies you. The relic is lost forever.\n";
        std::cout << "Tragic Ending: You fail your quest and return empty-handed.\n";
    }

    return 0;
}