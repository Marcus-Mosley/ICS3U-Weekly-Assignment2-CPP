// Copyright (C) 2020 Marcus A. Mosley All rights reserved
//
// Created by Marcus A. Mosley
// Created on August 2020
// This program calculates the surface area and volume of a hexagonal prism
//   with user input

#include <iostream>
#include <iomanip>
#include <cmath>

int main() {
    // This function calculates calculates the surface area and volume
    float base_edge;
    float height;
    float surface_area;
    float volume;

    // Input
    std::cout << "Enter Length of the Base Edge of the Hexagonal Prism (mm): ";
    std::cin >> base_edge;
    std::cout << "Enter Height of the Hexagonal Prism (mm): ";
    std::cin >> height;

    // Process
    surface_area = 6 * base_edge * height + 3 * sqrt(3) * pow(base_edge, 2);
    volume = (3 * sqrt(3)) / 2 * pow(base_edge, 2) * height;

    // Output
    std::cout << "" << std::endl;
    std::cout << "If a hexagonal prism has a base edge length of "
              << std::fixed << std::setprecision(0) << std::setfill('0')
              << base_edge << "mm, and a height of "
              << std::fixed << std::setprecision(0) << std::setfill('0')
              << height << "mm: " << std::endl;
    std::cout << "" << std::endl;
    std::cout << "Surface Area is "
              << std::fixed << std::setprecision(2) << std::setfill('0')
              << surface_area << " mm^2" << std::endl;
    std::cout << "Volume is "
              << std::fixed << std::setprecision(2) << std::setfill('0')
              << volume << " mm^3" << std::endl;
}
