bool search(int arr[], int n, int target) {
	int left = 0, right = n - 1;
	int currSum = arr[left] + arr[right];

	while (left < right) {
		if (currSum == target)
			return true;
		else if (currSum < target) {
			left++;
			currSum = arr[left] + arr[right];
		}
		else {
			right--;
			currSum = arr[left] + arr[right];
		}
	}

	return false;
}


bool searchTriplet(int arr[], int n, int target) {
	for (int i = 0; i < n; i++) {
		// A little modification in search function, we are providing the first index.
		if (search(a, i + 1, n - 1, x - a[i]))
			return true;
	}

	return false;
}