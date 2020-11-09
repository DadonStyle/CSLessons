// Task 03.11.20.cpp : Defines the entry point for the application.
//

#include "Task 03.11.20.h"

using namespace std;
// task:Take the biggest 2 numbers of any size (this case 5 numbers) that the user will insert and multyplay the biggest numbers

void Insert (int* arr, int size){
	for (int i = 0; i < size; i++) {
		cout << "Enther the num" << i + 1 << ": " << endl;
		cin >> arr[i];
	}
}

void Biggest(int* arr, int size) {
	for (int i = 1; i < size; i++) {
		// Inline IF -> If an "if", "else", "while" or "for" contains only one line of code, then no scope ({}) is needed
		if (max < arr[i]) max = arr[i];
		if (min > arr[i]) min = arr[i]; // Inline IF
	}
}

int main()
{
	const int size = 5;
	int arr[size];

	Insert(arr, size);

	int max = arr[0];
	int min = arr[0];

	Biggest(arr, size);


	cout << "Max number entered: " << max << endl;
	cout << "Min number entered: " << min << endl;
}
