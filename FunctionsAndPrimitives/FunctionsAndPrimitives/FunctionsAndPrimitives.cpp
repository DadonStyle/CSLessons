// FunctionsAndPrimitives.cpp : Defines the entry point for the application.
//

#include "FunctionsAndPrimitives.h"

using namespace std;

/* Helper Functions */
int multiply(int a, int b) { return a * b; }
int divide(int a, int b) { return a / b; }
int add(int a, int b) { return a + b; }
int subtruct(int a, int b) { return a - b; }

int main()
{
	int a, b;
	char action;
	bool restart = true; // A boolean can be true or false -> 1 bit

	while (restart) {
		// Step 1: Get 2 numbers from user
		cout << "Enter number 1: ";
		cin >> a;
		cout << "Enter number 2: ";
		cin >> b;

		// Step 2: Get action from user
		cout << "please choose an action (+,-,*,/): ";
		cin >> action;
		while (cin.get() != '\n');

		// Step 3: Run the action selected
		cout << "Result: ";
		switch (action) {
		case '+':
			cout << add(a, b);
			break;
		case '-':
			cout << subtruct(a, b);
			break;
		case '*':
			cout << multiply(a, b);
			break;
		case '/':
			cout << divide(a, b);
			break;
		default:
			cout << "Action Uknown!";
			break;
		}
		/*
		if (action == '+') cout << add(a, b); // Inline if
		if (action == '-') cout << subtruct(a, b);
		if (action == '*') cout << multiply(a, b);
		if (action == '/') cout << divide(a, b);
		*/
		cout << endl;

		while (action != 'y' && action != 'n') { // || -> OR, && -> AND, ^ -> XOR
			cout << "Do you want to restart the process (y/n)? ";
			cin >> action;
			while (cin.get() != '\n');
			if (action == 'y') restart = true;
			else if (action == 'n') restart = false;
		}
	}
}
