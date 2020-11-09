// BubbleSort.cpp : Defines the entry point for the application.
//

#include "BubbleSort.h"

using namespace std;
void Insert(int* arr, int size){
	for (int i = 0; i < size; i++) {
		cout << "Please enter number " << i + 1 << ":";
		cin >> arr[i];
	}
}

void Sort(int*arr, int size){
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
	const int size = 4;
	int arr[size];
	int add = 0;

	Insert(arr, size);
	Sort(arr, size);


	for (int i = 0; i < size; i++) { cout << arr[i] << " "; }

}
