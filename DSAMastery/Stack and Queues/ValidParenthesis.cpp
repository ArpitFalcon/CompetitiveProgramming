#include <bits/stdc++.h>
using namespace std;

bool validParenthesis(string s) {
	int n = s.length();

	// Pruning
	if (n & 1)
		return false;
	if (n == 0)
		return true;

	// Implementation
	stack<char> st;
	st.push(s[0]);

	for (int i = 1; i < n; i++) {
		if (!st.empty()) {
			if (st.top == '(' && s[i] == ')') {st.pop(); continue;}
			else if (st.top == '{' && s[i] == '}') {st.pop(); continue;}
			else if (st.top == '[' && s[i] == ']') {st.pop(); continue;}
		}

		st.push(s[i]);
	}

	if (st.empty()) return true;

	return false;
}

int main() {
	// Check for a number of testcases
	int T;
	cin >> T;

	while (T--) {
		string S;
		cin >> S;

		if (validParenthesis(S))
			cout << "balanced" << endl;
		else
			cout << "not balanced" << endl;
	}
}