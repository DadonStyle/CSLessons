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

int StringFinder(int size_str, int size_find, char* str, char* find) {
	bool is_matching; // Flag problem

	for (int i = 0; i <= size_str - size_find; i++) { // Ordinal Problem
		is_matching = true;
		for (int j = 0; j < size_find; j++) { // Ordinal problem
			if (str[i + j] != find[j]) { // Conditional Loop Problem
				is_matching = false;
				break;
			}
		}

		if (is_matching) return i;
	}
	return -1;
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

	int result = StringFinder(size_str, size_find, str, find);
	cout << "Position at: " << result << endl;

	// TODO: return the start index of the first occurrence of find in str;
	return 0;
}
