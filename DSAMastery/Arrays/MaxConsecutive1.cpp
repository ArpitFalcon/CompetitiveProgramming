int maxConsecutiveOne(int arr[], int n) {
	int curr = 0;
	int max_till = 0;

	for (int i = 0; i < n; i++) {
		if (arr[i] == 1) {
			curr++;
			max_till = max(max_till, curr);
		}
		else (arr[i] == 0) {
			curr = 0;
		}
	}

	return max_till;
}