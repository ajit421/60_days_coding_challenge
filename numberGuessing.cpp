#include <iostream>
#include <cstdlib>
#include <ctime>

int main() {
    // Seed the random number generator
    std::srand(static_cast<unsigned int>(std::time(nullptr)));

    // Generate a random number between 1 and 100
    int secretNumber = std::rand() % 100 + 1;

    int guess;
    int attempts = 0;

    std::cout << "Welcome to the Guess the Number game!" << std::endl;
    std::cout << "Try to guess the secret number between 1 and 100." << std::endl;

    do {
        std::cout << "Enter your guess: ";
        std::cin >> guess;

        attempts++;

        if (guess == secretNumber) {
            std::cout << "Congratulations! You guessed the number in " << attempts << " attempts." << std::endl;
        } else if (guess < secretNumber) {
            std::cout << "Too low. Try again." << std::endl;
        } else {
            std::cout << "Too high. Try again." << std::endl;
        }

    } while (guess != secretNumber);

    return 0;
}

