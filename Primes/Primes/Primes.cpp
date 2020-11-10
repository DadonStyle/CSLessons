// Primes.cpp : Defines the entry point for the application.
//

#include "Primes.h"

using namespace std;

bool isPrime(int n) {
	for (int i = 2; i < n; i++) { // Ordinal Problem
		if (n % i == 0) return false; // Condition
	}

	return true;
}

int main()
{
	int n = 0;
	cout << "Enter a number: ";
	cin >> n;
	
	if (isPrime(n)) cout << "Yep its a prime";
	else cout << "Not a prime haha";

	return 0;
}
