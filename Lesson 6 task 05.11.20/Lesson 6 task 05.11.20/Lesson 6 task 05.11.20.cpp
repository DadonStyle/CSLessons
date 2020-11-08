// Lesson 6 task 05.11.20.cpp : Defines the entry point for the application.
//

#include "Lesson 6 task 05.11.20.h"
// TODO: build a program that asks him: 1. how old is he? 2. what year did he born? 3. and ask for 3 more numbers {do it dinamic} 
// and than print the sum of all the numbers with the values that he insert
using namespace std;

int sum(int * arr, int s) {
	int add = 0;
	for (int i = 0; i < s; i++) add += arr[i]; // add = add + arr[i];
	return add;
}

void getArrayFromUser(int* arr, int size) {
	for (int i = 0; i < size; i++) {
		cout << "enter number " << i + 1 << ":";
		cin >> arr[i]; // arr == hu + 2 -> arr[0] = hu[2]
	}
}

int main()
{
	const int size = 4;
	int hu[size + 2];

	cout << "How old are you?" << endl;
	cin >> hu[0]; // Age

	cout << "What's your year of birth?" << endl;
	cin >> hu[1]; // Year of birth

	getArrayFromUser(hu + 2, size);
	
	int add = sum(hu, size + 2);

	cout << add << " " << size;
	cout << endl << *(hu); // arr[2]
}
