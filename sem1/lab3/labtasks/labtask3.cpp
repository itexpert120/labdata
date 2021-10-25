/* Write a program that asks the user to enter a value for x and
 * then displays the value of the following polynomial
 * 2x^5+3x^4-x^3-2x^2+7x-6. To calculate x^5 you will have to use
 * pow(x, 5).
 */

#include <cmath>
#include <iostream>

int main() {
    int x{};
    std::cout << "Enter a value for X: ";
    std::cin >> x;

    int result = 2 * pow(x, 5) + 3 * pow(x, 4) - pow(x, 3) - 2 * pow(x, 2) + 7 * x - 6;

    std::cout << "\n2x^5+3x^4-x^3-2x^2+7x-6 = " << result << "\n";
    return 0;
}
