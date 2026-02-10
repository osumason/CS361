//
// Created by mason on 2/9/2026.
//
#include <iostream>
#include "header.h"

void navigation (int& y, int& x, char input)
{ //needs error checking for out of bounds
    bool valid = false;

    input = std::toupper(input);

    while (!valid)
    {
        switch (input)
            {
            case 'W':
                y += 1; // Move Up
            valid = true;
            break;
            case 'S':
                y -= 1; // Move Down
            valid = true;
            break;
            case 'A':
                x -= 1; // Move Left
            valid = true;
            break;
            case 'D':
                x += 1; // Move Right
            valid = true;
            break;
            default:
                std::cout << "Invalid input! Use W, A, S, or D." << std::endl;
            break;
        }
    }
}
