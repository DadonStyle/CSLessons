// SwapVariables.cpp : Defines the entry point for the application.
//

#include "SwapVariables.h"

using namespace std;

int main()
{
	int a, b, c;
	
	cout << "Enter number a: ";
	cin >> a;
	cout << "Enter number b: ";
	cin >> b;

	cout << "a: " << a << endl << "b: " << b << endl;

	// Swap between a and b
	c = a;
	a = b;
	b = c;

	cout << "a: " << a << endl << "b: " << b << endl;
	return 0;
}
