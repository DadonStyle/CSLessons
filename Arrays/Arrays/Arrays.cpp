// Arrays.cpp : Defines the entry point for the application.
//

#include "Arrays.h"
#include "Another.h"

using namespace std;

void awesomeCode() {
	int size;
	int* arr; // Pointer
	int index = 0;

	cout << "How many numbers to enter: ";
	cin >> size;

	arr = new int[size]; // Dynamically allocate a new array of type int
	cout << "Address of arr: " << arr << endl;

	while (index < size) {
		cout << "Enter number at " << index << ": ";
		cin >> arr[index];
		index++;
	}

	index = 0;
	while (index < size) {
		cout << "Number at " << index << ": " << arr[index] << endl;
		index++;
	}

	delete[] arr;
}

int main()
{
	int arr[5];
	int index = 0;

	arr[0] = 10;
	arr[1] = 2;
	arr[2] = 2;
	arr[3] = 5;
	arr[4] = 9;

	while (index < 5) {
		cout << "Array at " << index << ": " << arr[index] << endl;
		index += 2; // index = index + 2;
		// index--; => index = index - 1;
	}

	cout << getAwesomeNumber() << endl;

	awesomeCode();
	return 0;
}
