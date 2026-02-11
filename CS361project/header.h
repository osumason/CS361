//
// Created by mason on 2/4/2026.
//

#ifndef STORY_H
#define STORY_H
#include <vector>
#include <string>

void gamelauncher();
void intro();
void storytime();
void sizemap(std::vector<std::vector<char>>&map, int ylength, int xlength);
void makemap(std::vector<std::vector<char>>&map, int ylength, int xlength, int& yplayer, int& xplayer);
void displaymap(std::vector<std::vector<char>>map, int ylength, int xlength);
void createUI(std::vector<std::vector<std::string>>&interface);
void displayUI(std::vector<std::vector<std::string>>interface);
void navigation (std::vector<std::vector<char>>map, int& y, int& x, char input, int ylength, int xlength);
void updatemap(std::vector<std::vector<char>>&map, int y, int x, char asset);

#endif //STORY_H