/*
 * From LAB TASK 3 print all the results in the same line
 */

#include <iostream>

int main() {
	// take input for first number
	std::cout << "Enter a number: ";
	float a{};
	std::cin >> a;

	// take output for second number
	std::cout << "Enter another number: ";
	float b{};
	std::cin >> b;

	// output the required operations on same line
	std::cout << "\n" << a << " + " << b << " = " << a + b;
	std::cout << "\t" << a << " - " << b << " = " << a - b;
	std::cout << "\t" << a << " * " << b << " = " << a * b;
	std::cout << "\t" << a << " / " << b << " = " << a / b;
	std::cout << "\t" << a << "^2 = " << a * a;
	std::cout << "\t" << b << "^2 = " << b * b << "\n";
	return 0;
}


