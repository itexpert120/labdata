/*
 * Write a program to calculate the distance between two points using
 * distance formula when coordinates of both the points are input by user
 */

#include <cmath>
#include <iostream>

int main() {
    double x1{}, x2{}, y1{}, y2{};

    std::cout << "Enter values for 1st Point: ";
    std::cin >> x1 >> y1;

    std::cout << "Enter values for 2nd Point: ";
    std::cin >> x2 >> y2;

    double distance = sqrt(pow((x2 - x1), 2) + pow((y2 - y1), 2));

    std::cout << "\nDistance between two points = " << distance << "\n";

    return 0;
}