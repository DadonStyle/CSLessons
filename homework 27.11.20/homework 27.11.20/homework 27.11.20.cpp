// homework 27.11.20.cpp : Defines the entry point for the application.
//

#include "homework 27.11.20.h"
using namespace std;

int *AddToArray(int* arr, long long int size, int input) {
	int* temp = new int[size + 1];
	for (int i = 0; i < size; i++) temp[i] = arr[i];
	temp[size] = input;
	delete[] arr;
	return temp;
}

int* concatenate(int* arr1, int* arr2, long long int arr1_size, long long int arr2_size) {
	int* temp = new int[arr1_size + arr2_size];
	for (int i = 0; i < arr1_size;i++) temp[i] = arr1[i];	
	for (int i = 0; i < arr1_size + arr2_size;i++) temp[arr1_size + i] = arr2[i];
	return temp;
}
  
void DupliKiller(int* arr, int size) {
	for (int i = 0; i < size;i++) {
		for (int j = 0; j < size; j++) {
			if (j + i >= size) j == 0;

			else if (j == 0 && i == 0) j == 1;

			else if (arr[j] == arr[i]) {
				size = size - 1;
				
			}

			else continue;
			
		}
	}
}

 int main()

 {
	 int input = -1;
	 int* arr1 = nullptr;
	 long long int arr1_size = 0;
	 int* arr2 = nullptr;
	 long long int arr2_size = 0;
	 int arr3_size = 0;

	 cout << "Please enter the first array: ";
	 while (input != 0) {
		 cin >> input;
		 if (input == 0) break;
		 arr1 = AddToArray(arr1, arr1_size, input);
		 arr1_size++;
	 }

	 cout << "Please enter the second array: ";
	 input = cin.get();
	 while (input != 0) {
		 cin >> input;
		 if (input == 0) break;
		 arr2 = AddToArray(arr2, arr2_size, input);
		 arr2_size++;
	 }

	 int* arr3 = concatenate(arr1, arr2, arr1_size, arr2_size);
	 for (int i = 0; i < arr1_size + arr2_size;i++) cout << "|" << arr3[i];
	 cout << endl;
	 arr3_size = arr1_size + arr2_size;

	 DupliKiller(arr3, arr3_size);

	 for (int i = 0; i < arr3_size;i++) cout << "|" << arr3[i];

	 
 }
