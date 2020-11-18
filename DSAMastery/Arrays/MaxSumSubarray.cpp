int maxSumSubArray(int arr[], int n) {
	int curr = 0;
	int max_till = INT_MIN;

	for (int i = 0; i < n; i++) {
		curr += arr[i];
		max_till = max(max_till, curr);

		if (curr < 0)
			curr = 0;
	}

	return max_till;
}