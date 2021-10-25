/*
 * Write a code in C++ that takes radius of 
 * a circle as input from user and outputs the 
 * circumference and area. The output should be 
 * clear and readable. Add proper comments to the 
 * code. You can set the value of π up to 3 decimal 
 * places.
 */

// Define predefiend mathematical values
#define _USE_MATH_DEFINES

// include cmath and iostream header files
#include <cmath>
#include <iostream>

// start the main function
int main() {

	// initialize radius as float and take user input
	double radius{};
	std::cout << "Enter the Radius of Circle: ";
	std::cin >> radius;

	// calculate circumference and area
	double circumference = 2 * M_PI * radius;
	double area = M_PI * radius * radius;

	// output the results
	std::cout << "\nCircumference: " << circumference;
	std::cout << "\nArea: " << area;

	return 0;
}
