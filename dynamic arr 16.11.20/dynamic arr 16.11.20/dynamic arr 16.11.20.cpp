// dynamic arr 16.11.20.cpp : Defines the entry point for the application.
//

#include "dynamic arr 16.11.20.h"

using namespace std;

int cinString(int* str, int size) { // camelCase
	int new_size = 0;
	for (int i = 0; i < size; i++) {
		char temp = cin.get();
		if (temp == '0') break;
		str[i] = temp;
		new_size++;
	}
	return new_size;
}

int main()
{
	const int size = 256;
	int arr[size];

	cinString(arr, size);

	


}
