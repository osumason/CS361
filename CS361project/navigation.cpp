//
// Created by mason on 2/9/2026.
//
#include <iostream>
#include <string>

#include "header.h"

void navigation (std::vector<std::vector<char>>map,int& y, int& x, char input, int ylength, int xlength)
{
    bool valid = false;

    input = std::toupper(input);

    while (!valid) //this loop checks for WASD movement. Checks for not WASD, out of bounds, and rocks on map.
    {
        switch (input)
        {
            case 'W':
            {
                if ( y - 1 < 1)
                {
                    throw (std::out_of_range("input"));
                }
                else if (map[y - 1][x] == '.')
                {
                    throw (std::runtime_error ("rock"));
                }
                else
                {
                    y -= 1; // Move Up
                    valid = true;
                }
                 break;
            }

            case 'S':
            {
                if ( y + 1 > ylength - 1)
                {
                    throw (std::out_of_range("input"));
                }
                else if (map[y + 1][x] == '.')
                {
                    throw (std::runtime_error ("rock"));
                }
                else
                {
                    y += 1; // Move Up
                    valid = true;
                }
                break;
            }

            case 'A':
            {
                if ( x - 1 < 1)
                {
                    throw (std::out_of_range("input"));
                }
                else if (map[y][x - 1] == '.')
                {
                    throw (std::runtime_error ("rock"));
                }
                else
                {
                    x -= 1; // Move Up
                    valid = true;
                }
                break;
            }

            case 'D':
            {
                if ( x + 1 > xlength - 1)
                {
                    throw (std::out_of_range("input"));
                }
                else if (map[y][x + 1] == '.')
                {
                    throw (std::runtime_error ("rock"));
                }
                else
                {
                    x += 1; // Move Up
                    valid = true;
                }
                break;
            }

            default:
                std::cout << "Invalid input! Use W, A, S, or D." << std::endl;
            break;
        }
    }
}
