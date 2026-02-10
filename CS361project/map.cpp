//
// Created by mason on 2/4/2026.
//

#include <iostream>
#include <vector>
#include <chrono>
#include "header.h"

void sizemap(std::vector<std::vector<char>>&map, int ylength, int xlength)
{
    map.resize(ylength, std::vector<char>(xlength));
}

void makemap(std::vector<std::vector<char>>&map, int ylength, int xlength, int& yplayer, int& xplayer)
{
    char rock = '.';
    char player = '@';

    //creates map border
    for (int x = 0; x < xlength; x++)
    {
        for (int y = 0; y < ylength; y++)
        {

            if (x == 0 || x == xlength - 1)
            {
                map[y][x] = '|';
            }
            else if (y == 0 ||  y == ylength - 1)
            {
                map[y][x] = '#';
            }
            else
            {
                map[y][x] = ' ';
            }
        }
    }

    int count = 15;
    while (count > 0)
    {
        int randomx = rand() % xlength;
        int randomy = rand() % ylength;
        if (map[randomy][randomx] == ' ')
        {
            map[randomy][randomx] = rock;
            count--;
        }
    }

    count = 1;

    while (count > 0)
    {
        int randomx = rand() % xlength;
        if (map[1][randomx] == ' ')
        {
            map[1][randomx] = player;
            count--;
        }
    }
}

    void displaymap(std::vector<std::vector<char>>map, int ylength, int xlength)
    {
        for (int y = 0; y < ylength; y++)
        {
            for (int x = 0; x < xlength; x++)
            {
                std::cout << map[y][x];
            }
            std::cout << '\n';
        }
    }