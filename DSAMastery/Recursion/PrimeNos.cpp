#include <iostream>
using namespace std;

bool isPrime(int n, int i) {
	// Base Case
	if (n < 2)
		return false;

	if (i == 1)
		return true;

	if (n % i == 0)
		return false;

	// Recursive Case
	return isPrime(n, i - 1);
}


int testPrime(int num) {
	int prime = isPrime(num, num / 2);
	return prime;
}