// Copyright (c) 2022 Navin Balekomebole All rights reserved.
//
// Created by: Navin Balekomebole
// Created on: Jan 17, 2022
// This program uses a loop an if statement
// to display integers from 1000 - 2000.
// It puts multiples of 5 on a new line.
#include <iostream>

int main() {
    // declare variables
    int counter;

    // loop to increment counter
    for (counter = 1000; counter < 2001; counter++) {
        if (counter == 1000) {
            std::cout << counter << " ";
        } else if (counter % 5 == 0) {
            std::cout << "\n" << counter << " ";
        } else {
            std::cout << counter << " ";
        }
    }
}
