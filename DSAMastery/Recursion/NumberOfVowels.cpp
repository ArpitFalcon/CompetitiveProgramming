#include <bits/stdc++.h>
using namespace std;

int totalVowels(string text, int len, int index) {
	// Base Case
	if (index == len)
		return 0;

	char current = tolower(text[index]);
	if (current == 'a' || current == 'e' || current == 'i' || current == 'o' || current == 'u') {
		return 1 + totalVowels(text, len, index + 1);
	}

	return totalVowels(text, len, index + 1);
}

int main() {
	string test = "Hello here HiI.";
	cout << totalVowels(test, test.length(), 0);
}