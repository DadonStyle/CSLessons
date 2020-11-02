// ArraysLessonsTask02.11.20.cpp : Defines the entry point for the application.
//
//Task: take 5 numbers in the form of arrays from the user
// ask the use if he want to add those numbers or multiplay
// show the result to the use
#include "ArraysLessonsTask02.11.20.h"

using namespace std;





int main()
{
	int arr[5];
	char response;

	cout << "Insert 5 numbers" << endl;
	cin >> arr[0];
	cout << "number 1 is: " << arr[0] << endl;
	cin >> arr[1];
	cout << "number 2 is: " << arr[1] << endl;
	cin >> arr[2];
	cout << "number 3 is: " << arr[2] << endl;
	cin >> arr[3];
	cout << "number 4 is: " << arr[3] << endl;
	cin >> arr[4];
	cout << "number 5 is: " << arr[4] << endl;

	int multiplay(arr[0] * arr[1] * arr[2] * arr[3] * arr[4]);
	int add(arr[0] + arr[1] + arr[2] + arr[3] + arr[4]);

	cout << "would you like to add or multiplay those numbers? Answer + or *" << endl;
	cin >> response;

	switch (response)
	{
	case '*': multiplay;
		cout << "the result is: " << multiplay << endl;
		break;
	case '+': add;
		cout << "thre result is: " << add << endl;
		break;
	}

}