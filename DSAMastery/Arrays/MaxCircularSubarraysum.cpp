int circularSubarraySum(int arr[], int n) {
	int curr = 0;
	int sum = 0;
	int maxStraight = INT_MIN;
	int maxCircular = INT_MIN;


	for (int i = 0; i < n; i++) {
		curr += arr[i];
		maxStraight = max(maxStraight, curr);
		sum += arr[i];

		if (curr < 0)
			curr = 0;
	}

	int minStraight = INT_MAX;
	for (int i = 0; i < n; i++) {
		curr += arr[i];
		minStraight = min(minStraight, curr);

		if (curr > 0)
			curr = 0;
	}

	if (maxStraight < 0)
		return maxStraight;

	maxCircular = sum - minStraight;
	return max(maxStraight, maxCircular);
}