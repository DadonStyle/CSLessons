// StringCounter.cpp : Defines the entry point for the application.
//

#include "StringCounter.h"

using namespace std;


int main()
{
	char* sentence = new char[0];
	long long int size = 0;
	char input = ' ';
	int letter_counter[26] = { 0 };
	int alphabet[26] = { 0 };
	int carryLetter = 97;
	


	cout << "Enter a sentence: " << endl;
	input = cin.get();
	
	while (input != '\n') {
		// Add to sentence
		input = cin.get();
		char* temp = new char[size + 1];						// Create a dynamic array bigger by one from the original
		for (int i = 0; i < size; i++) temp[i] = sentence[i];	// Copy previous values to new location
		temp[size] = input;										// Add relevant new value
		delete[] sentence;										// Delete previous array from memory
		sentence = temp;										// Set the pointer to point on the new array
		size++;													// Increment size

		// Count letters
		int letter_index = input - 'a';
		if (letter_index < 0 && letter_index > 25) cout << "invalid char";
		else letter_counter[letter_index]++;

		
	}
	for (int i = 0; i < 26; i++) {
		int carryLetter = i + 97;
		cout << char(carryLetter);
	}
	cout << endl;
	for (int i = 0; i < 26; i++) cout << letter_counter[i];

	return 0;
}
