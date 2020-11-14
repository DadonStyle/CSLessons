// Task 11.11.20.cpp : Defines the entry point for the application.
//

#include "Task 11.11.20.h"

using namespace std;

void ARRAYS(int * arr , int amount) {
	for (int i = 0; i < amount; i++) {
		cout << "please enter number " << i + 1 << ":";
		cin >> arr[i];
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
	for (int j = 0; j < amount - 1; j++) {
		if (min > arr[j + 1] && special < min)
			min = arr[j + 1];
		}
		
	}
	
	cout << min;





}