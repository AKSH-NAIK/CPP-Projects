#include <iostream>
#include <random>
#include <limits> // For numeric_limits

int main() {
    char play_again;

    do {
        // Initialize random number generator
        std::random_device rd;
        std::mt19937 gen(rd());
        std::uniform_int_distribution<> distr(1, 100); // Number between 1 and 100

        int secret_number = distr(gen);
        int guess;
        int attempts = 0;

        std::cout << "\n=== Number Guessing Game ===\n";
        std::cout << "I'm thinking of a number between 1 and 100.\n";

        // Game loop
        while (true) {
            std::cout << "Enter your guess: ";

            // Input validation
            if (!(std::cin >> guess)) {
                std::cin.clear(); // Clear error flags
                std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); // Discard invalid input
                std::cout << "Invalid input. Please enter a number.\n";
                continue;
            }

            attempts++;

            if (guess < secret_number) {
                std::cout << "Too low! Try again.\n";
            } else if (guess > secret_number) {
                std::cout << "Too high! Try again.\n";
            } else {
                std::cout << "You guessed it in " << attempts << " tries.\n";
                break;
            }
        }

        // Ask to play again
        std::cout << "Do you want to play again? (y/n): ";
        std::cin >> play_again;

        // Clear input buffer just in case
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

    } while (play_again == 'y' || play_again == 'Y');

    std::cout << "Thanks for playing! Goodbye.\n";
    return 0;
}
