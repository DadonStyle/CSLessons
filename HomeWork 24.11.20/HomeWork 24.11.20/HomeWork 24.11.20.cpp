// HomeWork 24.11.20.cpp : Defines the entry point for the application.
//


#include "HomeWork 24.11.20.h"
using namespace std;

#define WIDTH 26
#define HEIGHT 3

int main()
{

    char input = ' ';
	bool currentPlayer = true;
    char Arena[HEIGHT][WIDTH];
    char n, m;

    for (n = 0; n < HEIGHT; n++) {
        for (m = 0; m < WIDTH; m++)
        {
            Arena[n][m] = m + 97;
        }
    }

    while (input != Arena[1][25]) {
        cout << "Player " << (currentPlayer ? 1 : 2) << " Turn: ";
        input = cin.get();
        cin.get() != '/n';
        currentPlayer = !currentPlayer;
    }

    

    
    
}
