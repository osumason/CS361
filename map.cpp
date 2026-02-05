//
// Created by mason on 2/4/2026.
//

#include <iostream>
#include <vector>
#include "header.h"


void sizemap(std::vector<std::vector<char>>&map, int size)
{
    map.resize(size, std::vector<char>(size * 2));
}

void makemap(std::vector<std::vector<char>>&map, int size)
{
    for (int y = 0; y < size; y++)
    {
        for (int x = 0; x < size * 2; x++)
        {
            if (x == 0 || x == size * 2 - 1)
            {
                map[y][x] = '|';
            }
            else if (y == 0 ||  y == size - 1)
            {
                map[y][x] = '#';
            }
            else
            {
                map[y][x] = ' ';
            }
        }
    }
}

void displaymap(std::vector<std::vector<char>>&map, int size)
{
    for (int y = 0; y < size; y++)
    {
        for (int x = 0; x < size * 2; x++)
            {
            std::cout << map[y][x];
            }
        std::cout << '\n';
    }
}