// Copyright (c) 2019 Andrei Chirilov All rights reserved.
//
// Created by: Andrei Chirilov
// Created on: November 2019
// This program converts celsius to fahrenheit

#include <iostream>

int temp() {
    int celsius;
    float Fahrenheit;

    // input
    std::cout << "Enter a degree in celsius: ";
    std::cin >> celsius;

    // process
    Fahrenheit = (celsius * 1.8) +   32;

    // output
    std::cout << celsius << " Celsius is " << Fahrenheit << " Fahrenheit ";
}

int main() {
    // Calling function
    temp();
}
