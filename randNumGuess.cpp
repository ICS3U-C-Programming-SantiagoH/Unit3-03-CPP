// Copyright (c) 2023 Santiago Hewett All rights reserved.
//
// Created by: Santiago Hewett
// Date: Oct, 16, 2023
// This program will ask the user for a number between
// 1 and 10 then check if they guessed my number

#include <iostream>

// Include this for std::setprecision

#include <cmath>
#include <iomanip>
#include <random>

int main() {
    // create a random seed value

    std::random_device rd;

    // create the sequence for number generator

    std::mt19937 gen(rd());

    // declare userGuess and correctGuess variable

    int userGuess;
    int correctGuess;

    // declare constants

    const int MIN_NUMBER = 1;
    const int MAX_NUMBER = 10;

    // get the userGuess and display message

    std::cout << "This program asks the user for the a number from ";
    std::cout << "\n1 to 10  and then displays if you guess correctly or not";
    std::cout << "\nwith the answer changing each time.";
    std::cout << "\nEnter your guess between 1 and 10: ";
    std::cin >>
        userGuess;

    // Create a distribution between 1 and 10

    std::uniform_int_distribution<int> distribution(MIN_NUMBER, MAX_NUMBER);

    // generate correctGuess

    correctGuess = distribution(gen);

    if (userGuess == correctGuess) {
        // display that the user answer is correct

        std::cout << "\n";
        std::cout << "Congratulations, you guessed correctly";
    } else {
        // display that the user answer is incorrect
        std::cout << "\n";
        std::cout << "Please guess again, the correct answer was,"
                  << correctGuess << "";
    }
}
