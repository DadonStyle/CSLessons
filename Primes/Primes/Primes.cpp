// Primes.cpp : Defines the entry point for the application.
//

#include "Primes.h"
#include <math.h>

using namespace std;

bool isPrime(int n) {
	for (int i = 2; i <= sqrt(n); i++) { // Ordinal Problem
		if (n % i == 0) return false; // Condition
	}
	return true;
}

int findPrimeAt(int prime_index) {
	int counter = 1;
	int current_prime = 2;

	while (counter < prime_index) {
		int prime_candidate = current_prime + 1;
		while (!isPrime(prime_candidate)) prime_candidate++;
		current_prime = prime_candidate;
		counter++;
	}

	return current_prime;
}

int main()
{
	int u = 0;
	cout << "enter a number ";
	cin >> u;

	cout << "The prime at " << u << " is: " << findPrimeAt(u);
}