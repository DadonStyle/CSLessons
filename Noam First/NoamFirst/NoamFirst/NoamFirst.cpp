// NoamFirst.cpp : Defines the entry point for the application.
//

#include "NoamFirst.h"

using namespace std;

void ignore_cin() {
	char a = cin.get();
	while (a != '\n') {
		cout << "Ignoring: " << a << endl;
		a = cin.get();
	}
	cout << "A new line is found, the input has been cleaned." << endl;
}

/**
 * The same as ignore_cin() but faster and without output
 */
void super_ignore_cin() {
	while (cin.get() != '\n');
}

int main()
{
	int childrens;
	int brothers;
	char response;
	cout << "How many childrens do you wish to have?\n";
	cin >> childrens;
	cout << "And how many brothers do you have?" << endl;
	cin >> brothers;
	cout << "so you have " << brothers;
	cout << " brothers and you want " << childrens; cout << " childrens?" << endl;
	cin >> response; // Get n
	cout << "The input is: " << response << endl;
	ignore_cin();

	while (response != 'y')
	{
		cout << "Come on man press the y already" << endl;
		cin >> response;
		ignore_cin();
	}

	if (response == 'y')
	{
		if (brothers > childrens) cout << "you are weak";
		if (brothers == childrens) cout << "you are the man";
		if (brothers < childrens) cout << "horny af";

	}
}
	