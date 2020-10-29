// FunctionsAndPrimitives.cpp : Defines the entry point for the application.
//

#include "FunctionsAndPrimitives.h"

using namespace std;

int multiply(int a, int b) {
	cout << a << ", " << b << endl;
	return a * b;
}

int main()
{
	int a = multiply(10, 20);
	cout << a << endl;
	cout << multiply(20, 10) << endl;

	if (a != 5) {
		int b = multiply(40, 12);
		cout << "Haha" << endl;
		cout << b << endl;
	}
}
