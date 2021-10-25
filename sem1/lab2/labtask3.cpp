/*
 * Write a C++ code that takes two numbers and 
 * displays the addition, subtraction, division, 
 * multiplication and square of given numbers, on 
 * the console window. Make sure to comment your code.
 */

#include <iostream>

int main() {
	// take input for first number
	std::cout << "Enter a number: ";
	float a{};
	std::cin >> a;

	// take input for second number
	std::cout << "Enter another number: ";
	float b{};
	std::cin >> b;

	// output the required operations
	std::cout << "\n" << a << " + " << b << " = " << a + b;
	std::cout << "\n" << a << " - " << b << " = " << a - b;
	std::cout << "\n" << a << " * " << b << " = " << a * b;
	std::cout << "\n" << a << " / " << b << " = " << a / b;
	std::cout << "\n" << a << "^2 = " << a * a;
	std::cout << "\n" << b << "^2 = " << b * b << "\n";
	return 0;
}


