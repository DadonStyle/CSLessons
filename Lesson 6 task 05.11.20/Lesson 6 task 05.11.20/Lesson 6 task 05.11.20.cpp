// Lesson 6 task 05.11.20.cpp : Defines the entry point for the application.
//

#include "Lesson 6 task 05.11.20.h"
// TODO: build a program that asks him: 1. how old is he? 2. what year did he born? 3. and ask for 3 more numbers {do it dinamic} 
// and than print the sum of all the numbers with the values that he insert
using namespace std;


int main()
{
	int age;
	int YOB;
	const int size = 4;
	int arr[size];

	cout << "How old are you?" << endl;
	cin >> age;

	cout << "What's your year of birth?" << endl;
	cin >> YOB;

	for (int i = 0; i < size; i++) {
		cout << "enter number " << i + 1 << ":";
		cin >> arr[i];

	}
	
	int add = arr[0];
	int	index = 1;
	
	while (index < size) {
		add = add + arr[index];
		index++;
	}

	cout << add + age + YOB;
	

	
}
