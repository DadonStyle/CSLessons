// NoamFirst.cpp : Defines the entry point for the application.
//

#include "NoamFirst.h"

using namespace std;

int main()
{
	int childrens;
	int brothers;
	char response;
	cout << "How many childrens do you wish to have?" << endl;
	cin >> childrens;
	cout << "And how many brothers do you have?" << endl;
	cin >> brothers;
	cout << "so you have " << brothers; cout << " brothers and you want " << childrens; cout << " childrens?" << endl;
	cin >> response;

	while (response != 'y')
	{
		cout << "Come on man press the y already" << endl;
		cin >> response;
	}

	if (response == 'y')
	{
		if (brothers > childrens) cout << "you are weak";
		if (brothers == childrens) cout << "you are the man";
		if (brothers < childrens) cout << "horny af";

	}
}
	