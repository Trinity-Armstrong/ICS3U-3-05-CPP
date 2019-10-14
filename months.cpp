// Copyright (c) 2019 Trinity Armstrong All rights reserved.
//
// Created by: Trinity Armstrong
// Created on: October 2019
// This program outputs the month that corresponds to the integer inputted

#include <iostream>
#include <string>

int main() {
    // This function outputs the month that corresponds to the integer inputted

    // variables
    std::string monthNumberAsString;
    int monthAsInt;

    // input
    std::cout << "Enter the number of a month (integer between 1-12): ";
    std::cin >> monthNumberAsString;

    monthAsInt = atoi(monthNumberAsString.c_str());

    // Process
    switch (monthAsInt) {
        case 1 :
            std::cout << "The 1st month of the year is January.";
            break;
        case 2 :
            std::cout << "The 2nd month of the year is February.";
            break;
        case 3 :
            std::cout << "The 3rd month of the year is March.";
            break;
        case 4 :
            std::cout << "The 4th month of the year is April.";
            break;
        case 5 :
            std::cout << "The 5th month of the year is May.";
            break;
        case 6 :
            std::cout << "The 6th month of the year is June.";
            break;
        case 7 :
            std::cout << "The 7th month of the year is July.";
            break;
        case 8 :
            std::cout << "The 8th month of the year is August.";
            break;
        case 9 :
            std::cout << "The 9th month of the year is September.";
            break;
        case 10 :
            std::cout << "The 10th month of the year is October.";
            break;
        case 11 :
            std::cout << "The 11th month of the year is November.";
            break;
        case 12 :
            std::cout << "The 12th month of the year is December.";
            break;
        default :
            std::cout << "Invalid input!";
    }
}
