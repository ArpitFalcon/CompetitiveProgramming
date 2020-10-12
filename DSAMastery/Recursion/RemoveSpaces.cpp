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


void removeSpacesAnother(string &s, int index) {
	if (s.size() == 0)
		return;

	if (index == s.size())
		return;

	if (s[index] == ' ') {
		s = s.substr(0, index) + s.substr(index + 1, s.size());

		removeSpacesAnother(s, index);
	}

	removeSpacesAnother(s, index + 1);
}

int main() {
	string s = "Hello World Heyy";

	cout << s << endl;
	// removeSpaces(s, 0, s.length());
	removeSpacesAnother(s, 0);
	cout << s << endl;
}