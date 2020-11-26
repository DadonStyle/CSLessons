// NumberCounter.cpp : Defines the entry point for the application.
//

#include "NumberCounter.h"

using namespace std;

int* addElementToArray(int * arr, long long int size, int element) {
	int* temp = new int[size + 1];
	for (int i = 0; i < size; i++) temp[i] = arr[i];
	temp[size] = element;
	delete[] arr;
	return temp;
}

int* concatenate(int* arr1, long long int arr1_size, int* arr2, long long int arr2_size) {
	int* temp = new int[arr1_size + arr2_size];
	for (int i = 0; i < arr1_size; i++) temp[i] = arr1[i];
	for (int i = 0; i < arr2_size; i++) temp[i + arr1_size] = arr2[i];
	return temp;
}

int main() //camelCase
{
	int max_number = 0; // under_score
	int input = -1;

	while (input != 0) {
		cout << "Enter number: ";
		cin >> input;
		if (input == 0) break;
		if (max_number < input) max_number = input;
	}

	cout << max_number << endl;

	input = -1;
	int* arr1 = nullptr;
	long long int arr1_size = 0;
	int* arr2 = nullptr;
	long long int arr2_size = 0;

	while (input != 0) {
		cout << "please enter your number: ";
		cin >> input;
		if (input == 0) break;
		arr1 = addElementToArray(arr1, arr1_size, input);
		arr1_size++;
	}

	input = -1;
	cout << "Now second one" << endl;

	while (input != 0) {
		cout << "please enter your number: ";
		cin >> input;
		if (input == 0) break;
		arr2 = addElementToArray(arr2, arr2_size, input);
		arr2_size++;
	}

	int* result = concatenate(arr1, arr1_size, arr2, arr2_size);
	for (int i = 0; i < arr1_size + arr2_size; i++) {
		cout << result[i] << " ";
	}
}
