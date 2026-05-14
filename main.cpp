#include <iostream>
#include <vector>

int main() {
    int chosenNumber = 7; 
    int userGuess = 0;    
    std::vector<int> history; 

    
    while (userGuess != chosenNumber) { 
        std::cout << "Enter a number: ";
        std::cin >> userGuess; 

        
        history.push_back(userGuess); 

        
        if (userGuess > chosenNumber) {
            std::cout << "Too high" << std::endl; 
        }
        else if (userGuess < chosenNumber) {
            std::cout << "Too low" << std::endl; 
        }
        else {
            std::cout << "Correct" << std::endl; 
        }
    }

    
    std::cout << "Your guess history:" << std::endl;
    for (int i = 0; i < history.size(); i++) { 
        std::cout << history[i] << " ";
    }
    std::cout << std::endl;

    return 0;
}
