bool validShuffle(string first, string second, string result) {

	int a = first.length();
	int b = second.length();
	int n = result.length();

	// Pruning
	if (n != a + b)
		return false;

	int i = 0, j = 0, k = 0;
	while (k < n) {
		if (i < a and first[i] == result[k])
			i++;
		else if (j < b and second[j] == result[k])
			j++;
		else
			return false;

		k++;
	}

	if (i != a || j != b)
		return false;

	return true;
}