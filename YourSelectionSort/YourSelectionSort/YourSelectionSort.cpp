// YourSelectionSort.cpp : Defines the entry point for the application.
//

#include "YourSelectionSort.h"

using namespace std;

int main()
{
	int* arr = nullptr;
	int size = 0;
	int input = -1;

	while (input != 0) {
		cout << "Enter number: ";
		cin >> input;
		if (input == 0) break;
		int* temp = new int[size + 1];
		for (int i = 0; i < size; i++) temp[i] = arr[i];
		if(arr != nullptr) delete[] arr;
		arr = temp;
		arr[size] = input;
		size++;
	}

	int max = 0;
	int min = 0;

	for (int i = 1; i < size; i++) {
		if (arr[i] > arr[max]) max = i;
		if (arr[i] < arr[min]) min = i;
	}

	int temp = arr[min];
	arr[min] = arr[0];
	arr[0] = temp;
	if (max == 0 && min != size - 1) max = min;

	if (max != 0 || min != size - 1) {
		temp = arr[max];
		arr[max] = arr[size - 1];
		arr[size - 1] = temp;
	}

	for (int i = 0; i < size; i++) cout << "|" << arr[i];

}
