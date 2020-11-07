// BubbleSort.cpp : Defines the entry point for the application.
//

#include "BubbleSort.h"

using namespace std;

int main()
{
	const int size = 4;
	int arr[size];
	int add = 0;
	for (int i = 0; i < size; i++) {
		cout << "Please enter number " << i+1 << ":";
		cin >> arr[i];
	}

	for (int i = 0; i < size - 1; i++) {
		for (int j = 0; j < size - 1; j++) {
			if (arr[j] < arr[j + 1]) {
				int temp = 0;
				temp = arr[j+1];
				arr[j+1] = arr[j];
				arr[j] = temp;
			}
		}
	}

	for (int i = 0; i < size; i++) { cout << arr[i] << " "; }

}
