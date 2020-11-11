void printPowerSet(string s) {
	int n = s.size();

	for (int i = 0; i < pow(2, n); i++) {

		for (int j = 0; j < n; j++) {
			if (i & (1 << j))
				cout << s[j];
		}

		cout << endl;
	}
}