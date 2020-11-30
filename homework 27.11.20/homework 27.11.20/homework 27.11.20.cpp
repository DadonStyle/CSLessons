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
  
int DupliKiller(int* arr, int n) {
	
		int j = 0;

		for (int i = 0; i < n; i++) {
			for (j = i + 1;j < n;)
			{
				if (arr[i] == arr[j])
				{
					for (int k = j;k < n - 1;++k)
						arr[k] = arr[k + 1];

					--n;
				}
				else
					++j;
			}
		}

		return n;
	}

 int main()

 {
	 int input = -1;
	 int* arr1 = nullptr;
	 int arr1_size = 0;
	 int* arr2 = nullptr;
	 int arr2_size = 0;
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

	 arr3_size = DupliKiller(arr3, arr3_size);

	 for (int i = 0; i < arr3_size;i++) cout << "|" << arr3[i];

	 
 }
