/*
 * Prompt the user to enter a String and 
 * then display that String on console.
 */

#include <string>
#include <iostream>

int main() {
	std::cout << "Input a String: ";
	std::string userInput;
	std::getline(std::cin, userInput);
	std::cout << "\nYour Input String is: " << userInput << "\n";
	return 0;
}

