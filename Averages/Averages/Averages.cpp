// Averages.cpp : Defines the entry point for the application.
//

#include "Averages.h"

using namespace std;

float wierdSum(int n) {
	float result = 0;
	for (int i = 1; i <= n; i++)
		result = result + (i + 1) / i;
	return result;
}

int main()
{
	int magic_number = 1;
	int counter = 0;
	int sum = 0;

	while (magic_number != 0) {
		cout << "Enter number: ";
		cin >> magic_number;
		sum += magic_number;
		counter++;
	}

	cout << "Average is: " << sum / counter;

	return 0;
}
