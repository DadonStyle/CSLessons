// ArraysLessonsTask02.11.20.cpp : Defines the entry point for the application.
//
//Task: take 5 numbers in the form of arrays from the user
// ask the use if he want to add those numbers or multiply
// show the result to the use
#include "ArraysLessonsTask02.11.20.h"

using namespace std;

int main()
{
	const int size = 10;
	int arr[size]; // arr[0] <=> arr[size - 1]
	char response;
	// int index = 0;

	cout << "Insert " << size << " numbers" << endl;
	/*
	while (index < size) {
		cout << "Enter number " << (index + 1) << ": ";
		cin >> arr[index];
		index++; // Move forward in order
	}
	*/

	for (int i = 0; i < size; i++) {
		cout << "Enter number " << (i + 1) << ": ";
		cin >> arr[i];
	}

	int multiply = arr[0];
	int add = arr[0];

	for (int i = 1; i < size; i++) {
		multiply = multiply * arr[i];
		add = add + arr[i];
	}

	// index = 1; // Restart the index
	/*
	while (index < size) {
		multiply = multiply * arr[index];
		add = add + arr[index];
		index++; // Important -> If index not changing a pitfall of an infinite loop might be present
	}
	*/
	/*
	multiply = multiply * arr[2];
	multiply = multiply * arr[3];
	multiply = multiply * arr[4];
	*/

	cout << "would you like to add or multiply those numbers? Answer + or *" << endl;
	cin >> response;

	switch (response)
	{
	case '*':
		cout << "the result is: " << multiply << endl;
		break;
	case '+':
		cout << "thre result is: " << add << endl;
		break;
	}

}