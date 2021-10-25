/*
 * Write a code in C++ to take integer values, divide them and
 * print answer with decimal points.
 */

#include <iostream>

int main() {
    int a{}, b{};

    std::cout << "Enter First Integer: ";
    std::cin >> a;

    std::cout << "Enter Second Integer: ";
    std::cin >> b;

    std::cout << "\n" << a << " / " << b << " = " << (float) a / (float) b << "\n";
    return 0;
}