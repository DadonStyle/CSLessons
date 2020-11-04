// Task 03.11.20.cpp : Defines the entry point for the application.
//

#include "Task 03.11.20.h"

using namespace std;
// task:Take the biggest 2 numbers of any size (this case 5 numbers) that the user will insert and multyplay the biggest numbers
int main()
{
	const int size = 4;
	int arr[size];

    for (int i = 0; i < size; i++) {
	cout << "Enther the num: " << i + 1 << endl;
	cin >> arr[i];
 }

	if (arr[0] <= arr[1])
	{
		cout << arr[1] << endl;
		return 0;
	}
	else (arr[1] < arr[0]);
		{ cout << arr[0] << endl; }
    

		if (arr[2] <= arr[3])
		{
			cout << arr[3] << endl;
			return 0;
		}

		else (arr[3] < arr[2]);
		{ cout << arr[2] << endl; }
		

}
