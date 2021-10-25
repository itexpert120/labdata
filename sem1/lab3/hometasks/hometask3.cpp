/*
 * Write a code in C++ to enter P, T, R and
 * calculate Simple Interest.
 */

#include <iostream>

int main() {
    int P{}, R{}, T{};
    std::cout << "Enter Principal: ";
    std::cin >> P;

    std::cout << "Enter Rate % per Annum: ";
    std::cin >> R;

    std::cout << "Enter Amount of Years: ";
    std::cin >> T;

    int SI = P * R * T;

    std::cout << "\nSimple Interest = " << SI << "\n";
    return 0;
}