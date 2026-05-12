#include <iostream>
#include <vector>

int main() {
    // 1. Store the chosen number and initialize variables
    int chosenNumber = 7; // [cite: 16, 17]
    int userGuess = 0;    // [cite: 18]
    std::vector<int> history; // [cite: 19]

    // 2. While loop runs as long as the guess is incorrect
    while (userGuess != chosenNumber) { // [cite: 20]
        std::cout << "Enter a number: ";
        std::cin >> userGuess; // [cite: 22, 23]

        // Save the value into the list immediately
        history.push_back(userGuess); // [cite: 24]

        // 3. Compare the guess with the chosen number
        if (userGuess > chosenNumber) {
            std::cout << "Too high" << std::endl; // [cite: 26]
        }
        else if (userGuess < chosenNumber) {
            std::cout << "Too low" << std::endl; // [cite: 27]
        }
        else {
            std::cout << "Correct" << std::endl; // [cite: 28]
        }
    }

    // 4. After the loop, display all guesses using a for loop
    std::cout << "Your guess history:" << std::endl;
    for (int i = 0; i < history.size(); i++) { // [cite: 29]
        std::cout << history[i] << " ";
    }
    std::cout << std::endl;

    return 0;
}
