#define _CRT_SECURE_NO_WARNINGS
#include "user.h"
#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <string.h>




char getRandomChar() {
	//create a string of every letter, then have an 
	static char availChars[37] = "abcdefghijklmnopqrstuvwxyz1234567890";
	int availCharsNum = 35;

	char selected = availChars[(rand() % (availCharsNum - 0 + 1) + 0)];
	return selected;
}

void createRandomName(char* name, int length) {
	for (int i = 0; i < length - 1; i++) {
		name[i] = getRandomChar();
	}
	name[length - 1] = '\0';
}
// function to team, assign randome to each team
void chooseRandTeam(char* name) {
	int randChoice = (rand() % (3 - 1 + 1) + 1);
	if (randChoice == 1) {
		strncpy(name, "Red", 10);
		//return name;
	}
	else if (randChoice == 2) {
		strncpy(name, "Blue", 10);
		//return name;
	}
	else {
		strncpy(name, "Green", 10);
		//return name;
	}

}