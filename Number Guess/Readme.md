🎯 Number Guessing Game (C++)
A simple command-line Number Guessing Game written in C++ where the player tries to guess a randomly selected number between 1 and 100. The game provides hints and tracks the number of attempts, with an option to play again after each round.

🧰 Tech Stack
Language: C++

IDE: Visual Studio Code

Compiler: g++ (MinGW / Linux-compatible)

🚀 How to Run
Clone the project or copy the .cpp file into your working directory.

Open Terminal in VS Code (Ctrl + ).

Compile the code using:

Copy
Edit
g++ -o number_guessing_game number_guessing_game.cpp
Run the program using:

bash
Copy
Edit
./number_guessing_game
📥 Input Format
Enter a number between 1 and 100 as your guess.

Input must be a valid number (non-numeric entries are rejected with a message).

After each round, you can choose to play again by entering y or Y.

📤 Sample Output
vbnet
Copy
Edit
=== Number Guessing Game ===
I'm thinking of a number between 1 and 100.
Enter your guess: 50
Too low! Try again.
Enter your guess: 75
Too high! Try again.
Enter your guess: 63
You guessed it in 3 tries.
Do you want to play again? (y/n): n
Thanks for playing! Goodbye.
📊 Game Logic
A random number between 1 and 100 is generated at the start of each game.

The player makes guesses until the correct number is found.

After each guess, the program will indicate:

"Too low!" if the guess is below the secret number

"Too high!" if the guess is above the secret number

"You guessed it!" when correct

The number of attempts is displayed upon a correct guess.

⚠️ Validation & Error Handling
Non-integer inputs are detected and rejected with an error message.

The game clears input errors and continues without crashing.

Negative or out-of-range numbers are allowed but won’t match the target (for simplicity).

✅ Features
Generates a new random number for each game session 🎲

Tracks number of attempts 📈

Input validation for clean user experience 🛡️

Option to replay the game 🔁

Lightweight and beginner-friendly project 🌱

🌟 Future Enhancements
Set a maximum number of attempts per game and end the game with a loss if exceeded ⏳

Track and display the time taken to guess the correct number ⌛

Add difficulty levels with varying ranges (e.g., Easy: 1-50, Hard: 1-500) 🎮

