//
// Created by mason on 2/9/2026.
//

#include <iostream>

#include "header.h"



void createUI (std::vector<std::vector<char>>&interface)
{
    interface.resize(20, std::vector<char>(40));

    for (int x = 0; x < 40; x++)
    {
        for (int y = 0; y < 20; y++)
        {

            if (x == 0 || x == 39 || (x == 19 && y > 11))
            {
                interface[y][x] = '|';
            }
            else if (y == 0 ||  y == 11 || y == 19)
            {
                interface[y][x] = '#';
            }
            else
            {
                interface[y][x] = ' ';
            }
        }
    }


    std::vector<std::string> header = {"Movement","W - Up" ,"S - Down" ,"A - Left" ,"D - Right"};
    /*std::string up = "W - Up";
    std::string down = "S - Down";
    std::string left = "A - Left";
    std::string right = "D - Right";*/


    for (int x = 3; x < header.size() + 3; x++) {
        interface[13][x] = header[x-3];

    }




}

void displayUI(std::vector<std::vector<char>>interface) {
    {
        for (int y = 0; y < 20; y++)
        {
            for (int x = 0; x < 40; x++)
            {
                std::cout << interface[y][x];
            }
            std::cout << '\n';
        }
    }

}
