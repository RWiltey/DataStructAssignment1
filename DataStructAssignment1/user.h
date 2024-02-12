#pragma once

//creating a name randomizer, first hast to create a string with every available character
char getRandomChar();
// creating a similar randomizer for the name
void chooseRandTeam(char* name);
// utilizing the random char function to create names
void createRandomName(char* name, int length);