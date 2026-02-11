//
// Created by mason on 2/9/2026.
//

#include <iostream>
#include <string>

#include "header.h"


void createUI (std::vector<std::vector<std::string>>&interface)
{ //the UI is a fixed size as compared to the map

    interface.resize(20, std::vector<std::string>(40));

    for (int x = 0; x < 40; x++)
    {
        for (int y = 0; y < 20; y++)
        {
            if (x == 0 || x == 39)
            {
                interface[y][x] = "|";
            }
            else if (y == 0 ||  y == 11 || y == 19)
            {
                interface[y][x] = "#";
            }
            else
            {
                interface[y][x] = " ";
            }
        }
    }

    std::string header[]= {"Messages:"};
    for (int i = 0; i < std::size(header); i++)
        {
        for (int x = 0; x < header[i].length();x++)
            interface[2 + i][3 + x] = header[i][x];
        }

    std::string movement[]= {"Movement","W - Up" ,"S - Down" ,"A - Left" ,"D - Right"};
    for (int i = 0; i < std::size(movement); i++)
        {
        for (int x = 0; x < movement[i].length();x++)
            interface[13 + i][3 + x] = movement[i][x];
        }

    std::string actions[]= {"Actions","M - Map", "EXIT - Leave Game", "RESTART - Start over"};
    for (int i = 0; i < std::size(actions); i++)
        {
        for (int x = 0; x < actions[i].length();x++)
            interface[13 + i][19 + x] = actions[i][x];
        }

}

void displayUI(std::vector<std::vector<std::string>>interface)
{
    {
        std::cout << '\n';
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

/*void charUI (std::vector<std::vector<char>>&interface)
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
    std::string up = "W - Up";
    std::string down = "S - Down";
    std::string left = "A - Left";
    std::string right = "D - Right";

}*/


/*void chardisplay(std::vector<std::vector<char>>interface) {
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
}*/
