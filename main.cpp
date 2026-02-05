// main.cpp
// Mason Antram
// CS 361

#include <iostream>
#include <vector>

#include "header.h"



int main () {

    std::vector<std::vector<char>> map;
    int size = 25;


    storytime();
    sizemap(map, size);
    makemap(map, size);
    displaymap(map, size);


    return 0;
}



