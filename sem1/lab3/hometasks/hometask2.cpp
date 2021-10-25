/*
 * Write a code in C++ to take length from user in
 * centimeter and convert it into meter and kilometer.
 */

#include <iostream>

int main() {
    int cm;
    std::cout << "Enter amount of Centimeters: ";
    std::cin >> cm;

    double meter, kmeter;
    meter = cm / 100;
    kmeter = meter / 1000;

    std::cout << "\nMeters: " << meter;
    std::cout << "\nKilometers: " << kmeter << "\n";
    return 0;
}