/*
 * Write a C++ code to print following 
 * output on console without using endl
 */

#include <iostream>

int main() {
    int len = 5;
    for (int i = 1; i <= len; i++) {
        for (int j = 0; j < i; j++) {
            std::cout << "*";
        }
        std::cout << "\n";
    }
    return 0;
}

