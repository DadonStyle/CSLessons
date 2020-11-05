// SelectionSort.cpp : Defines the entry point for the application.
//

#include "SelectionSort.h"

using namespace std;

int main()
{
	const int size = 10;
	int arr[size];

	for (int i = 0; i < size; i++) {
		cout << "Enter number " << i << ": ";
		cin >> arr[i];
	}

	int start = 0;
	int end = size - 1;
	int max_index = 0;
	int min_index = 0;

	while (start >= end) {
		// Reset min and max
		max_index = start;
		min_index = start;

		// Find max & min
		for (int i = start + 1; i <= end; i++) {
			if (arr[max_index] < arr[i]) max_index = i;
			if (arr[min_index] > arr[i]) min_index = i;
		}

		// Set max at end & min at start
		int temp = arr[end];
		arr[end] = arr[max_index];
		arr[max_index] = temp;

		temp = arr[start];
		arr[start] = arr[min_index];
		arr[min_index] = temp;

		// Move end backwards & start forwards
		start++;
		end--;
	}

	for (int i = 0; i < size; i++) cout << arr[i] << " ";

	return 0;
}
