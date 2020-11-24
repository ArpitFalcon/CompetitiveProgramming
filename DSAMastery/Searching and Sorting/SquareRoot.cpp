#include<iostream>
#include<bits/stdc++.h>

using namespace std;


int squareRoot(int n) {
	if (n <= 1)
		return n;
	int ans = -1;

	int low = 0, high = n / 2;
	while (low <= high) {
		int mid = low + (high - low) / 2;
		if (mid * mid == n)
			return mid;
		else if (mid * mid < n) {
			low = mid + 1;
			ans = mid;
		}
		else
			high = mid - 1;
	}

	return low - 1;
}

int main() {
	int n = 9;
	cout << squareRoot(n);
}