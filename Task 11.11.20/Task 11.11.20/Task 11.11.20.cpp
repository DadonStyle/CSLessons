﻿// Task 11.11.20.cpp : Defines the entry point for the application.
//

#include "Task 11.11.20.h"

using namespace std;

void ARRAYS(int * arr , int amount) {
	for (int i = 0; i < amount; i++) {
		cout << "please enter number " << i + 1 << ":";
		cin >> arr[i];
	}
}

void Sort(int* arr, int size) {
	for (int i = 0; i < size; i++) {
		for (int j = 0; j < size - i - 1; j++) {
			if (arr[j] > arr[j + 1]) {
				int temp = 0;
				temp = arr[j + 1];
				arr[j + 1] = arr[j];
				arr[j] = temp;
			}
		}
	}
}


int main()
{
	int const size = 256;
	int arr[size];
	int amount = 0;
	int special = 0;

	cout << "Please enter amount: ";
	cin >> amount;
	cout << "Thanks you" << endl;

	cout << "Please enter a special number: ";
	cin >> special;

	ARRAYS(arr, amount);

	int min = arr[0];
	for (int i = 1; i < amount - 1; i++) {
		if (arr[i] <= arr[i + 1] && arr[i] < min && arr[i] > special) {
			min = arr[i];
		}
		else if (arr[i + 1] < min && arr[i + 1] > special) {
			min = arr[i + 1];
		}
	}

	cout << "The position of the closest bigger number is: " << min << endl;
}