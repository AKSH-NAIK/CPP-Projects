🎯 Number Guessing Game (C++)
This is a simple command-line number guessing game written in C++. The program generates a random number between 1 and 100, and the user must guess it. After each guess, feedback is given, and the game continues until the correct number is guessed. The player can choose to play again after each round.

🚀 Features
Random number generation between 1 and 100

Input validation for non-numeric input

Keeps track of number of attempts

Option to replay the game

Clean and user-friendly console interface

🛠️ How to Compile and Run
Using g++
bash
Copy
Edit
g++ -std=c++11 -o guessing_game guessing_game.cpp
./guessing_game
Make sure g++ is installed on your system.

🧠 How to Play
The game picks a random number between 1 and 100.

You guess a number and press Enter.

The game will tell you if the number is too low, too high, or correct.

Once guessed correctly, it reports the number of attempts.

You’ll be prompted to play again.

📦 Dependencies
Standard C++ libraries:

<iostream>

<random>

<limits>

📄 File Structure
cpp
Copy
Edit
guessing_game.cpp    // Source code file
README.md            // Project documentation
🚧 Future Enhancements
Add difficulty levels (easy, medium, hard) with different number ranges

Implement a scoreboard to track best scores across sessions

Add color-coded output for better user experience (e.g., green for correct, red for errors)

Add a maximum number of attempts with optional hint system

Create a GUI version using libraries like Qt or SFML

Store player stats using file I/O