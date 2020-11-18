int maxEvenOdd(int arr[], int n) {
	int maxEO = 1;
	int curr = 1;

	for (int i = 1; i < n; i++) {
		if (((arr[i - 1] & 1) and !(arr[i] & 1)) or (!(arr[i - 1] & 1) and (arr[i] & 1))) {
			curr++;
			maxEO = max(maxEO, curr);
		}
		else
			curr = 1;
	}

	return maxEO;
}