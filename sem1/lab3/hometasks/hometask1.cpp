/*
 * Write a program to calculate the distance between two points using
 * distance formula when coordinates of both the points are input by user
 */

// import cmath for sqrt() and pow() functions
#include <cmath>
// import iostream for cin and cout
#include <iostream>

// start the main function
int main() {
    
    // initialize x1, x2, y1, y2 as doubles
    double x1{}, x2{}, y1{}, y2{};

    // prompt user for first point
    std::cout << "Enter values for 1st Point: ";
    // take values for x1 and y1
    std::cin >> x1 >> y1;

    // prompt user for second point
    std::cout << "Enter values for 2nd Point: ";
    // take values for x2 and y2
    std::cin >> x2 >> y2;

    // define a double called distance
    // which calculates the distance using the distance formula
    double distance = sqrt(pow((x2 - x1), 2) + pow((y2 - y1), 2));

    // output the result
    std::cout << "\nDistance between two points = " << distance << "\n";

    // return 0 to complete program
    return 0;
}