/*
 * Write a code in C++ that takes values of a and b from the 
 * user and displays result of polynomial a^2 + 2𝑎𝑏 + 𝑏^2
 */

#include <cmath>
#include <iostream>

int main() {
	int a{};
	std::cout << "Enter value for a: ";
	std::cin >> a;

	int b{};
	std::cout << "Enter value for b: ";
	std::cin >> b;

	int result = pow(a, 2) + (2 * a * b) + pow(b, 2);

	std::cout << "\na^2 + 2ab + b^2 = " << result << "\n";

	return 0;
}
