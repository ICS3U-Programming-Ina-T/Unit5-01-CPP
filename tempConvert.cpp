// Copyright (c) 2022 Ina Tolo All rights reserved.
//
// Created by: Ina Tolo
// Created on: Jan. 17, 2022
// This program converts the entered temperature
// in Celcius to Fahrenheit.

#include <iostream>
#include <iomanip>


void CalculateFarenheit() {
    // declares variables
    std::string tempCString;
    float tempCFloat;
    float tempF;

    // collects temperature from user
    std::cout << "Enter the temperature (°C): ";
    std::cin >> tempCString;

    // checks if the user has entered the correct number
    try {
        // convert the user's guess to a float
        tempCFloat = std::stof(tempCString);

        // calculates the fahrenheit
        tempF = (9.0/5.0) * tempCFloat + 32;

        std::cout << std::fixed << std::setprecision(2) << tempCFloat;
        std::cout << "°C is equal to " << std::fixed;
        std::cout << std::setprecision(2) << tempF << "°F\n";

    // determines if the the answer is a number
    } catch (std::invalid_argument) {
    // tells user did the input is not a number
    std::cout << tempCString << " is not a number.\n";
    }
}


int main() {
    // calls the fahrenheit function
    CalculateFarenheit();
}
