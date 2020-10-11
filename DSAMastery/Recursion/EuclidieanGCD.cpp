#include <iostream>

using namespace std;

int euclideanGCD (int num1, int num2) {
	// Base Case
	if (num2 == 0)
		return num1;

	// Recursive Case
	return (num2, num1 % num2);
}


int gcd(int num1, int num2) {
	// Base Case
	if (num1 == num2)
		return num1;

	else if (num1 > num2)
		return gcd(num1 - num2, num2);

	else
		return gcd(num1, num2 - num1);
}