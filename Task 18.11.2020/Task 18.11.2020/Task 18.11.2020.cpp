// Task 18.11.2020.cpp : Defines the entry point for the application.
//

#include "Task 18.11.2020.h"

using namespace std;


int add(int a) {
	int sum = 0;
	for (int i = 1; i <= a; i++) {
		sum = sum + i;
	}
	return sum;
}


int multiplyer(int a) {
	int sum = 1;
	for (int i = 1; i <= a; i++) {
		sum = sum * i;
	}

	return sum;
}


int main()
{
	int theNumber = 0;
	cout << "please enter a number: ";
	cin >> theNumber;

	cout << "if you add all the numbers up to " << theNumber << " the result is: " << add(theNumber) << endl;
	cout << "if you multiplay all the numbers up to " << theNumber << " the result is: " << multiplyer(theNumber) << endl;
	
	




	
}
