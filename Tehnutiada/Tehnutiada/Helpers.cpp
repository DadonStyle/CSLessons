#include "Helpers.h"
#include <iostream>
#include <time.h>

using namespace std;

void clearCin() {
	int a = 5;
	a += 10;
	while (cin.get() != '\n');
}

char getRandomChar() {
	srand(time(NULL));	// initialize the random number generator
	return 'a' + (rand() % 26);
}