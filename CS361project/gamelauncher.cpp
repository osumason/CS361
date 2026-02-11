//
// Created by mason on 2/10/2026.
//

#include <iostream>
#include <vector>
#include<chrono>
#include <string>

#include "header.h"


void gamelauncher() {

    std::vector<std::vector<char>> map; //world map
    std::vector<std::vector<std::string>> interface; // UI interface
    int ylength = 20;
    int xlength = 40;
    int yplayer = 0;
    int xplayer = 0;
    bool playing = true;

    intro();
    sizemap(map, ylength,xlength); // move this to makemap
    makemap(map, ylength, xlength, yplayer, xplayer);
    createUI(interface);

    while (playing)
    {
        displayUI(interface); //this is the player's main screen
        bool valid = false;
        std::string input;

        while (!valid) {//loop checks for movement, action, exit, or restart until game is ended
            std::cout << "Please choose an action: ";
            std::cin >> input;

            if (input.length() == 1)
            {
                input = std::toupper(input[0]);
                if (input[0] == 'W' || input[0] == 'S' || input[0] == 'A' || input[0] == 'D')
                {
                    updatemap(map,yplayer,xplayer, ' ');
                    try
                        {
                        navigation (map, yplayer,xplayer,input[0], ylength, xlength);
                        valid = true;
                        }
                    catch (std::out_of_range& e)
                        {
                        std::cout << "Out of bounds.\n";
                        }
                    catch (std::runtime_error& e)
                        {
                        std::cout << "There's a rock there.\n";
                        }
                    updatemap(map,yplayer,xplayer, '@');
                }
                else if (input[0] == 'M')
                    {
                    displaymap(map, ylength, xlength);
                    valid = true;
                    }
            }
            else if (input.length() > 1)
                {
                for (int i = 0; i < input.length(); i++)
                    {
                    input[i] = std::toupper(input[i]);
                    }

                if (input == "EXIT")
                    {
                    playing = false;
                    valid = true;
                    }

                if (input == "RESTART")
                    {
                    gamelauncher();
                    valid = true;
                    }
            }
            else
                {
                std::cout << "Please choose one of the options listed.\n";
                }
        }
    }
}
