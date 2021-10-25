/*
 * Write a code in C++ that takes radius of 
 * a circle as input from user and outputs the 
 * circumference and area. The output should be 
 * clear and readable. Add proper comments to the 
 * code. You can set the value of π up to 3 decimal 
 * places.
 */

#define _USE_MATH_DEFINES

#include <cmath>
#include <iostream>

int main() {
	float radius{};
	std::cout << "Enter the Radius of Circle: ";
	std::cin >> radius;

	float circumference = 2 * M_PI * radius;
	float area = M_PI * radius * radius;

	std::cout << "\nCircumference: " << circumference;
	std::cout << "\nArea: " << area;

	return 0;
}
