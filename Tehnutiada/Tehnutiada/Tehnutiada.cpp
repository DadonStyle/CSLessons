﻿// Tehnutiada.cpp : Defines the entry point for the application.
//

#include "Tehnutiada.h"
#include <time.h>

using namespace std;

void clearCin() {
	while (cin.get() != '\n');
}

char getRandomChar() {
	char c;
	int r;

	srand(time(NULL));    // initialize the random number generator
	for (int i = 0; i < 25; i++)
	{
		r = rand() % 26;   // generate a random number
		c = 'a' + r;            // Convert to a character from a-z
	}
	return c;
}

int main()
{
	char input = ' ';
	char winning_character = getRandomChar();
	


	/*
	 * TRUE -> The first player
	 * FALSE -> The second
	 */
	bool current_player = true;

	while (input != winning_character) {
		/*
		 * Inline if - Doing if-else in code
		 * CONDITION ? IF_TRUE : ELSE_FALSE
		 */
		cout << "Player " << (current_player ? 1 : 2) << " Turn: ";
		// The same as:
		/*
		if (current_player) {
			cout << "Player 1 Turn: ";
		}
		else {
			cout << "Player 2 Turn: ";
		}
		*/
		cin >> input;
		clearCin();
		current_player = !current_player;
	}

	cout << "Player " << (current_player ? 2 : 1) << " WON";
		

	return 0;
}
