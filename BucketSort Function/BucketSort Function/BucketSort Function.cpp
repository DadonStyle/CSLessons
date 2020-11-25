// BucketSort Function.cpp : Defines the entry point for the application.
//

#include "BucketSort Function.h"
#include <vector>
#include <algorithm>

using namespace std;

void BucketSort(char arr[], int n) {
	//create an empty bucket
	vector<float> b[n];

	//put array elements in different buckets
		for (int i = 0; i < n; i++) {
			int bi = n * arr[i]; //index in bucket
			b[bi].pushback(arr[i]);
		}

	//sort individual buckets
		for (int i = 0; i < n; i++) {
			sort(b[i].begin(),b[i].end());
		}

	//concatenate all buckets into arr[]


}

int main()
{
	char arr[] = { 'a', 'b' , 'c' , 'd' , 'e' , 'f' , 'g' };
	int n = sizeof(arr) / sizeof(arr[0]);
	BucketSort(arr, n);

	cout << "Sorted array is: ";
	for (int i = 0; i < n;i++) {
		cout << arr[i] << " ";
	}

}
