// Strings.cpp : Defines the entry point for the application.
//

#include "Strings.h"

using namespace std;

int cinString(char * str, int size) { // camelCase
	int new_size = 0;
	for (int i = 0; i < size; i++) {
		char temp = cin.get();
		if (temp == '\n') break;
		str[i] = temp;
		new_size++;
	}
	return new_size;
}

int* addToDynamicArray(int* existing, int size, int to_add) {
	int* new_arr = new int[size + 1];
	// Copy previous values
	for (int i = 0; i < size; i++) {
		new_arr[i] = existing[i];
	}
	// Delete previous array location & values
	if(existing != nullptr) delete[] existing; // Delete previous array
	// Add the new element to array
	new_arr[size] = to_add;
	return new_arr;
}

int * StringFinder(int size_str, int size_find, char* str, char* find) {
	bool is_matching; // Flag problem
	int* dynamic_arr = new int[1]; // Pointer
	dynamic_arr[0] = 1;

	for (int i = 0; i <= size_str - size_find; i++) { // Ordinal Problem
		is_matching = true;
		for (int j = 0; j < size_find; j++) { // Ordinal problem
			if (str[i + j] != find[j]) { // Conditional Loop Problem
				is_matching = false;
				break;
			}
		}

		if (is_matching) {
			dynamic_arr = addToDynamicArray(dynamic_arr, dynamic_arr[0], i);
			dynamic_arr[0]++;
		}
	}

	return dynamic_arr;
}

int main()
{
	const int SIZE = 256;
	char str[SIZE] = { 0 };
	char find[SIZE] = { 0 };
	int size_str = 0;
	int size_find = 0;

	cout << "Enter A sentence: " << endl;
	size_str = cinString(str, SIZE);
	cout << "What to find in the sentence: " << endl;
	size_find = cinString(find, SIZE);

	int* result = StringFinder(size_str, size_find, str, find);
	for(int i = 1; i < result[0]; i++) cout << result[i] << " ";
	// TODO: return the start index of the first occurrence of find in str;
	return 0;
}
