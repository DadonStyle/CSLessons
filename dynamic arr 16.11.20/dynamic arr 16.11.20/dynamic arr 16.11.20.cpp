// dynamic arr 16.11.20.cpp : Defines the entry point for the application.
//

#include "dynamic arr 16.11.20.h"

using namespace std;

/**
 * Expands a given array's size by 1 and adds to the end of the new array the wanted value
 * 
 * @param int* existing		The position in memory (Pointer) of the array to expand
 * @param int size			The current size of the given array
 * @param int to_add		The value to add to the end of the array after expansion
 * 
 * @return The position of the new expanded array
 */
int* addToDynamicArray(int* existing, int size, int to_add) {
	int* new_arr = new int[static_cast<size_t>(size) + 1];
	// Copy previous values
	for (int i = 0; i < size; i++) {
		new_arr[i] = existing[i]; // existing[i] -> *(existing + i)
	}
	// Delete previous array location & values
	if (existing != nullptr) delete[] existing; // Delete previous array
	// Add the new element to array
	new_arr[size] = to_add;
	return new_arr;
}

void printArray(int * arr, int size) {
	for (int i = 0; i < size; i++) {
		cout << arr[i] << " ";
	}
	cout << endl;
}

int* getArrayFromUser() {
	int* arr = new int[1];
	arr[0] = 1; // The size
	int user_input = -1;

	while (user_input != 0) {
		// Get the number from the user
		cout << "Enter a number: ";
		cin >> user_input;
		if (user_input == 0) break;
		// Store the number in a collection
		arr = addToDynamicArray(arr, arr[0], user_input);
		arr[0]++;
	}

	return arr;
}

int main()
{
	int* arr1 = getArrayFromUser();
	int* arr2 = getArrayFromUser();
	int* arr = new int[(long long)(arr1[0] + arr2[0]) - 1];
	arr[0] = arr1[0] + arr2[0] - 1;

	
	for (int i = 1; i < arr[0]; i++) {
		if (i < arr1[0]) {
			arr[i] = arr1[i];
		}
		else {
			arr[i] = arr2[i - arr1[0] + 1];
		}
	}

	for (int i = 1; i < arr[0]; i++) {
		std::cout << arr[i] << ' ';
	}

	return 0;
	return 0;
}



