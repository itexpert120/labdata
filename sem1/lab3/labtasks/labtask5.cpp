/* 
 * Write a code in C++ to take one value in integer datatype
 * and second value in float datatype from user now add both
 * values. Print both values in float datatype and their sum
 * in integer
 */

#include <iostream>

int main() {
    int firstValue{};
    std::cout << "Enter an Integer: ";
    std::cin >> firstValue;

    float secondValue{};
    std::cout << "Enter a Float Value: ";
    std::cin >> secondValue;

    int sum = firstValue + secondValue;

    std::cout << "\nFirst Value: " << (float)firstValue;
    std::cout << "\nSecond Value: " << (float)secondValue;
    std::cout << "\nSum = " << sum << "\n";

    return 0;
}
