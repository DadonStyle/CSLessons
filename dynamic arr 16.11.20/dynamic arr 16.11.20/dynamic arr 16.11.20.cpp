// dynamic arr 16.11.20.cpp : Defines the entry point for the application.
//

#include "dynamic arr 16.11.20.h"

using namespace std;


int* addToDynamicArray(int* existing, int size, int to_add) {
	int* new_arr = new int[size + 1];
	// Copy previous values
	for (int i = 0; i < size; i++) {
		new_arr[i] = existing[i];
	}
	// Delete previous array location & values
	if (existing != nullptr) delete[] existing; // Delete previous array
	// Add the new element to array
	new_arr[size] = to_add;
	return new_arr;
}

int* StringPrinter(int SIZE, int* str) {
	int* dynamic_arr = new int[1]; // Pointer
	dynamic_arr[0] = 1;

	for (int i = 0; i <= SIZE; i++) {
		dynamic_arr = addToDynamicArray(dynamic_arr, dynamic_arr[0], i);
		dynamic_arr[0]++;
	}

	return dynamic_arr;
}

int main()
{
	const int SIZE = 256;
	int str[SIZE] = { 0 };
	int new_size = 0;
	int str_size = 0;
	
	for (int i = 0; i < SIZE; i++) {
		char temp = cin.get();
		
		if (temp == '0') break;
		str[i] = temp;
		new_size++;
		str_size++;
	}
	



	int* result = StringPrinter(SIZE , str);
	for (int i = 1; i < str_size; i++) cout << str[i] << " ";
	// TODO: return the start index of the first occurrence of find in str;
	return 0;


}



