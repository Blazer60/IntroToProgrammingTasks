//
// Project: IntroToProgrammingTasks
// Created by: Ryan Purse 
// Date: 07/10/2020
//

#include "TaskManager.h"
#include <iostream>

void Task5() {
    /*
     * Create a program that calculate the volume of a rectangular pool.
     * The pool has a deep and and a shallow end. The program assumes
     * that there is a linear interpolation between the two.
     * Inputs: Width, Length, DeepEndDepth, ShallowEndDepth (m^3)
     * Output: Volume (in m^3)
     */

    float Width{ 0 }, Length{ 0 }, DeepEndDepth{ 0 }, ShallowEndDepth{ 0 }, Volume{ 0 };
    std::cout << "Enter the width, length, Deep end depth, shallow end depth of you pool" << std::endl;
    std::cin >> Width >> Length >> DeepEndDepth >> ShallowEndDepth;

    // trapezium area * width
    Volume = 0.5f * (DeepEndDepth + ShallowEndDepth) * Length * Width;
    std::cout << "The amount of water needed is: " << Volume << "m^3";
}
