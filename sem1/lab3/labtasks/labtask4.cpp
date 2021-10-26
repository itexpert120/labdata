/* 
 * Take two complex number from user and add them. Print the
 * resultant complex number.
 */

#include <iostream>

int main() {
    int realA{}, imgA{}, realB{}, imgB{};
    std::cout << "Enter First Complex Number: ";
    std::cin >> realA >> imgA;

    std::cout << "Enter Second Complex Number: ";
    std::cin >> realB >> imgB;

    int realSum = realA + realB;
    int imgSum = imgA + imgB;

    std::cout << "\n" << realA << " + " << imgA << "i + " << realB << " + "
              << imgB << "i = " << realSum << " + " << imgSum << "i\n";
    return 0;
}
