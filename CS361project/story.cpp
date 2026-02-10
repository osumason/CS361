//
// Created by mason on 2/4/2026.
//

#include <iostream>

#include "header.h"
#include <chrono>
#include <thread>



void intro ()
{

    char input;
    bool valid = false;

    std::cout << "Welcome to The Epic Tale of JEFF \n"
    "Use WASD to navigate \n"
    "Press M to open the map \n"
    "Would you like to hear the story of JEFF (Y/N)? \n";

    while (!valid) {
        std::cin >> input;
        input = std::toupper(input);
        if (input == 'Y')
        {
            storytime();
            valid = true;
        } else if (input == 'N') {
            valid = true;
        }else (std::cout << "Please press Y or N. \n");
    }
}

void storytime() {
    std::cout << "\n \n \n";
    std::cout << "In an age of extreme social disconnection, the world of Orrgun teetered on the brink of eternal silence. \n";
    std::this_thread::sleep_for(std::chrono::seconds(2));
    std::cout << "The Great Void began to swallow the stars, and the prophets wept... for neither King nor peasant ";
    std::cout << "could \nbreak away from their phone long enough to fight the darkness.\n \n";
    std::this_thread::sleep_for(std::chrono::seconds(2));
    std::cout << "But the ancient scrolls spoke of a different kind of power...\n";
    std::cout <<      "Not a title, not a weapon, but a name. \n \n";
    std::this_thread::sleep_for(std::chrono::seconds(2));


    std::cout << "\t\"When humanity bows to technocracy,\n";
    std::this_thread::sleep_for(std::chrono::seconds(2));
    std::cout <<   "\t there shall arise a traveler of zero renown but over 9000 will. \n";
    std::this_thread::sleep_for(std::chrono::seconds(2));
    std::cout <<       "\t He shall be the light in the dark when your battery dies. \n";
    std::this_thread::sleep_for(std::chrono::seconds(2));
    std::cout <<      "\t He shall be the rebel who shuns the algorithm for the authenticity of human interaction. \n";
    std::this_thread::sleep_for(std::chrono::seconds(2));
    std::cout <<      "\t And it is totally unironic that the fight will be fought digitally! \n";
    std::this_thread::sleep_for(std::chrono::seconds(2));
    std::cout <<      "\t He shall be... JEFF.\" \n \n" ;
    std::this_thread::sleep_for(std::chrono::seconds(3));
}

