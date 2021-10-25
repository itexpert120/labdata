/*
 * Write a program in C++ to convert temperature in
 * Fahrenheit to Celsius
 */

#include <iostream>

int main() {
    double fahrenheit{};
    std::cout << "Enter Temperature in Fahrenheit: ";
    std::cin >> fahrenheit;

    double celsius = (fahrenheit - 32) / 1.8;

    std::cout << "\nCelsius: " << celsius << "\n";
    return 0;
}