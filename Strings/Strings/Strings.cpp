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

	

	for (int i = 0; i <= size_str - size_find; i++) {
		
		bool is_true = true;

		for (int j = 0; j < size_find; j++) {

			if (str[i + j] != find[j]) {
				is_true = false;
				break;
				
			}

			
		}

		if (is_true) {
			cout << "The position is: " << i << endl;
			break;

		}

	}

	
	if (str[size_str - size_find] != find[0]) return -1;
	
	
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

	StringFinder(size_str, size_find, str, find);

	
		


	// TODO: return the start index of the first occurrence of find in str;
	return 0;
}
