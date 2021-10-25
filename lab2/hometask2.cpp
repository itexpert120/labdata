/*
 * Write a C++ code to print the above 
 * pattern in one line without giving 
 * space manually between asterisks
 */

#include <iostream>

int main() {
    int len = 5;
    for (int i = 1; i <= len; i++) {
        for (int j = 0; j < i; j++) {
            std::cout << "*";
        }
        std::cout << "\t";
    }
    std::cout << "\n";
    return 0;
}

