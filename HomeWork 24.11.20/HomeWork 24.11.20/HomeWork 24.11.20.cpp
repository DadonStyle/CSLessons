// HomeWork 24.11.20.cpp : Defines the entry point for the application.
//


#include "HomeWork 24.11.20.h"
using namespace std;

bool WinnerFound(int * letter_counter) {
    for (int i = 0; i < 26; i++) {
        if (letter_counter[i] == 0) return false;
    }
    return true;
}

int main()
{
    char input = ' ';
	bool currentPlayer = true;
    int letter_couter[26] = { 0 };

    while (!WinnerFound(letter_couter)) {
        // Display console message:
        cout << "Player " << (currentPlayer ? 1 : 2) << " Turn: ";

        // Listen for input from user
        input = cin.get();
        // Clear unecessary input
        while(cin.get() != '\n');

        // Get the index of the selected letter
        int letter_index = input - 'a';

        // If letter appeared more than twice, then display error and re-try
        if (letter_index < 0 || letter_index > 25 || letter_couter[letter_index] == 2) {
            cout << "Can't do that, try again!" << endl;
        }
        // Else, count letter and switch turn
        else {
            letter_couter[letter_index]++;
            currentPlayer = !currentPlayer;
        }
    }

    cout << "Winner is: " << (currentPlayer ? 2 : 1) << endl;
}
