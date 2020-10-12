#include<bits/stdc++.h>
using namespace std;

void removeSpaces(string &s, int index, int len) {

	// Base Case
	if (len == 0)
		return;

	if (index == len)
		return;

	// Recursive Case
	if (s[index] == ' ') {
		int i = index;
		while (i < len) {
			s[i] = s[i + 1];
			i++;
		}

		removeSpaces(s, index, len - 1);
	}

	removeSpaces(s, index + 1, len);
}

int main() {
	string s = "Hello World Heyy";

	cout << s << endl;
	removeSpaces(s, 0, s.length());
	cout << s << endl;
}