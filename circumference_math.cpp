// Copyright (c) 2021 Hussein Mansour All rights reserved
//
// Created by: Hussein Mansour
// Created on: Tue/Apr27.2021
// This program calculates the  circumference of a circle using τ


#include <iostream>


int main() {
    // this function calculates the circumference of a circle
    const int  TAU = 6.28;
    int radius_of_circle;
    int circumference;

    // input
    std::cout << "calculating the circumference of a circle:" << std::endl;
    std::cout << "Enter the radius of a circle (mm):";
    std::cin >> radius_of_circle;

    // process
    circumference = TAU * radius_of_circle;

    // output
    std::cout << "" << std::endl;
    std::cout << "circumference is " << (circumference) << " mm." << std::endl;
    std::cout << "Done." << std::endl;
}
