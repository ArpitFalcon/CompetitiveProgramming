#include <iostream>
using namespace std;

int main() {
	// Testcases
	int t, n;
	cin >> t;
	string s;

	while (t--) {
		cin >> s;
		n = s.length();
		char temp;

		for (int i = 0; i < n / 2; i++) {
			temp = s[i];
			s[i] = s[n - i - 1];
			s[n - i - 1] = temp;
		}

		cout << s << endl;
	}


	return 0;
}