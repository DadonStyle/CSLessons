// SelectionSortNoam.cpp : Defines the entry point for the application.
//

#include "SelectionSortNoam.h"

using namespace std;

void InsertNumbers(int* arr, int size) {
	for (int i = 0; i < size; i++) {
		cout << "Enter number " << i << ": ";
		cin >> arr[i];
	}
}

void Sort(int* arr, int size) {
	int start = 0;
	int end = size - 1;
	int max_index = 0;
	int min_index = 0;

	while (start < end) {
		// Reset min and max
		max_index = start;
		min_index = start;

		// Find max & min
		for (int i = start + 1; i <= end; i++) {
			if (arr[max_index] < arr[i]) max_index = i;
			if (arr[min_index] > arr[i]) min_index = i;
		}

		// Set max at end & min at start
		if (max_index != end) {
			int temp = arr[end];
			arr[end] = arr[max_index];
			arr[max_index] = temp;
		}
		if (min_index != start && (max_index != start || min_index != end)) {
			int temp = arr[start];
			arr[start] = arr[min_index];
			arr[min_index] = temp;
		}

		// Move end backwards & start forwards
		start++;
		end--;
	}
}

void outloud(int* arr, int size) {
	for (int i = 0; i < size; i++) cout << arr[i] << " ";
}

int main()
{
	const int size = 5;
	int arr[size];

	InsertNumbers (arr, size);

	Sort(arr, size);

	outloud(arr, size);

	

	return 0;
}

