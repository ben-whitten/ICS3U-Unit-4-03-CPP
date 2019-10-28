// Copyright (c) 2019 St. Mother Teressa HS All rights reserved.
//
// Created by: Ben Whitten
// Created on: October 2019
// This is a program which squares numbers together up to another number.

#include <iostream>
#include <cstdlib>
#include <cmath>

int main() {
    // This is what runs the program.
    std::string numberAsString;
    int chosenNumber;
    int numberTotal = 0;
    int nextFullNumber;

    // Process
    while (true) {
        std::cout << "Input a positive number: ";
        std::cin >> numberAsString;
        std::cout << "" << std::endl;

        try {
            chosenNumber = std::stoi(numberAsString);

            if (chosenNumber > 0) {
            // Output
                for (nextFullNumber = 0; nextFullNumber < chosenNumber + 1;
                     nextFullNumber++) {
                     std::cout << nextFullNumber << "^2 = " <<
                     (pow(nextFullNumber, 2)) << std::endl;
                     numberTotal = (numberTotal + pow(nextFullNumber, 2));
                }
                std::cout << "Total = " << numberTotal << std::endl;
                break;
            } else {
                std::cout << "That was not a positive and/or whole number."
                << std::endl;
            }
        } catch (std::invalid_argument) {
        std::cout << "That was not a positive and/or whole number."
        << std::endl;
        }
    }
}
