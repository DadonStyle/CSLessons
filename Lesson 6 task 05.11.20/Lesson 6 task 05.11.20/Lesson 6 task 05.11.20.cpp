// Lesson 6 task 05.11.20.cpp : Defines the entry point for the application.
//

#include "Lesson 6 task 05.11.20.h"
// TODO: build a program that asks him: 1. how old is he? 2. what year did he born? 3. and ask for 3 more numbers {do it dinamic} 
// and than print the sum of all the numbers with the values that he insert
using namespace std;

void Insert(int* arr, int size) {
	for (int i = 0; i < size; i++) {
		cout << "enter number " << i + 1 << ":";
		cin >> arr[i];
	}
}

void add(int* arr, int size) { 
	int sum = 0;
	for (int i = 0; i < size; i++)
	{
		sum += arr[i];
	}
	cout << sum;
}


int main()
{
	const int size = 5;
	int arr[size + 2];
	

	cout << "How \"old\" are you?" << endl;
	cin >> arr[0];

	cout << "What's your year of birth?" << endl;
	cin >> arr[1];

	Insert(arr + 2, size);

	add(arr, size);

}
