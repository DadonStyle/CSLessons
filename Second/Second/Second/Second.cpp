// Second.cpp : Defines the entry point for the application.
//

#include "Second.h"

using namespace std;


int multiplay(int a, int b) { return a * b; }
int add(int a, int b) { return a + b; }
int substruct(int a, int b) { return a - b; }
int divide(int a, int b) { return a / b; }

int main() // i need to do a loop that u take int and than ask if to continue
{
	int a;
	char response;
	int b;
	char start;

	cout << "do you wish to start?" << endl;
	cin >> start;



	cout << "Please wright the a number" << endl;
	cin >> a;
	cout << "please choose the action that you would like to do (*,/,+,-,)" << endl;
	cin >> response;
	cout << "Please wright the a number" << endl;
	cin >> b;

	switch (response)
	{
	case '*': multiplay;
		cout << "the result is: "; cout << multiplay(a, b) << endl;
		break;
	case '+': add;
		cout << "the result is: "; cout << add(a, b) << endl;
		break;
	case '-': substruct;
		cout << "the result is: "; cout << substruct(a, b) << endl;
		break;
	case '/': divide;
		cout << "the result is: "; cout << divide(a, b) << endl;
		break;
	}

}


