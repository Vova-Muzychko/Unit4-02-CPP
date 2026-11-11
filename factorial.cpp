// Copyright (c) 2026 Vova All rights reserved.
//
// Created by: Vova
// Created on: November 11 2026
// This program calculates the factorial of a whole number using a
// do..while loop.

#include <cstdint>
#include <iostream>
#include <string>

int main() {
    std::string userString;

    std::cout << "Enter a positive whole number: ";
    std::cin >> userString;

    try {
        int userNumber = std::stoi(userString);

        // Check if user entered a decimal (e.g., std::stoi converts "3.14"
        // to 3).
        // To be strict, check if string contains a decimal point
        if (userString.find('.') != std::string::npos) {
            std::cout << "Invalid input! Please enter a whole integer."
                      << std::endl;
        } else if (userNumber < 0) {
            std::cout << "Invalid input! Please enter a number 0 or greater."
                      << std::endl;
        } else if (userNumber == 0) {
            std::cout << "0! = 1" << std::endl;
        } else {
            int64_t factorial = 1;
            int counter = userNumber;

            // C++ do..while loop
            do {
                factorial = factorial * counter;
                counter = counter - 1;
            } while (counter > 0);

            std::cout << userNumber << "! = " << factorial << std::endl;
        }
    } catch (std::invalid_argument const&) {
        std::cout << "Invalid input! That is not a whole number."
                  << std::endl;
    }

    return 0;
}
