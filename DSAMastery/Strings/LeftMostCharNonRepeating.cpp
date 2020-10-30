// One Pass Solution

int leftMostNonRepeating (string str, int n) {
	int res = INT_MAX;
	vector<int> index(256, -1);

	for (int i = 0; i < n; i++) {
		if (index[str[i]] == -1)
			index[str[i]] = i;
		else
			index[str[i]] = -2;
	}

	for (int i = 0; i < 256; i++)
		if (index[i] >= 0)
			res = min(res, index[i]);

	return res;
}