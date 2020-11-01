// SumNumbers.cpp : Defines the entry point for the application.
//

#include "SumNumbers.h"

using namespace std;

int main()
{
	int amount_of_numbers; // Holds the total amount of numbers to sum
	int current_number; // Holds the current number that the user entered
	int total = 0; // Holds the results of the addition of the numbers
	int index = 0; // Holds the number of numbers that have been entered

	cout << "Enter amount of numbers to sum: ";
	cin >> amount_of_numbers;

	// While we didn't get all the numbers
	while (index < amount_of_numbers) {
		// The current number can also be initialized inside the loop like so:
		// int current_number;
		// We initialized it in the scope of the main so that it will not initialize again and again

		// Get number from user
		cout << "Enter number " << (index + 1) << ": "; // NOTICE: We print index + 1 instead of index
		cin >> current_number;
		total = total + current_number; // Add into the total
		index++; // Shortcut for: index = index + 1;
	}

	// The loop ends when we entered all the numbers
	cout << "Result is: " << total << endl;
	return 0;
}
