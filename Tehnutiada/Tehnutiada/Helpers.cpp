// Pre-processor directives
#include "Helpers.h"
#include <iostream>
#include <time.h>

using namespace std;

char getRandomChar() {
	srand(time(NULL));	// initialize the random number generator
	return 'a' + (rand() % 26);
}