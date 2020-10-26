void fillDuplicates(vector<int> &count, string s, int n) {
	for (int i = 0; i < n; i++)
		count[s[i] - '0']++;
}

void findDuplicates (string s, int n) {
	vector<int> counts(256, 0);

	fillDuplicates(counts, s, n);
	for (int i = 0; i < 256; i++) {
		if (counts[i] > 1) {
			cout << (char)(i) << " " << counts[i] << endl;
		}
	}
}