// Tehnutiada.cpp : Defines the entry point for the application.
//

#include "Tehnutiada.h"

using namespace std;

int main()
{
	char input = ' ';
	char winning_character = getRandomChar();
	bool current_player = true;

	while (input != winning_character) {
		cout << "Player " << (current_player ? 1 : 2) << " Turn: ";
		cin >> input;
		CINCLEAR
		current_player = !current_player;
	}

	cout << "Player " << (current_player ? 2 : 1) << " WON";

	return 0;
}
