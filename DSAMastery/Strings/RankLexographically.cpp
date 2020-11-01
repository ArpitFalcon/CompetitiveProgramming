int lexRank (string str) {
	int res = 1;
	int n = str.length();

	int mal = fact (n);
	int count[256] = 0;

	for (int i = 0; i < n; i++)
		count[str[i]]++;

	for (int i = 1; i < 256; i++)
		count[i] = count[i] + count[i - 1];

	for (int i = 0; i < n; i++) {
		mal = mal / (n - i);
		rank = rank + count[str[i] - 1] * mal;

		for (int j = str[i]; j < 256; j++)
			count[j]--;
	}
	return rank;
}