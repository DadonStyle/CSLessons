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
	int searchValue = 0;

	cout << "Please enter amount: ";
	cin >> amount;
	cout << "Thanks you" << endl;

	cout << "Please enter a special number: ";
	cin >> special;

	ARRAYS(arr, amount);

	int min = arr[0];

	for (int j = 1; j < amount; j++) {

		while (min <= special) {
			min = arr[j];
			break;
		}

		if (arr[j] < arr[j + 1] && arr[j] < min && arr[j] > special) {
			min = arr[j];

			if (min = arr[j]) searchValue = j;

		}

		else if (arr[j + 1] < arr[j] && arr[j + 1] < min && arr[j + 1] > special) {
			min = arr[j + 1];

			if (min = arr[j + 1]) searchValue = j + 1;
		}
	}

	cout << "the smallest number that is bigger than special is: " << min << endl;
	cout << "the position is: " << searchValue + 1 << endl;



	
		

}
	

