int search(int arr[], int n, int x) {
	int low = 0, high = n - 1;

	while (low <= high) {
		int mid = low + (high - low) / 2;
		if (arr[mid] == x) return mid;
		// Left Half is Sorted
		if (arr[low] < arr[mid]) {
			if (x >= arr[low] and x < arr[mid])
				high = mid - 1;
			else
				low = mid + 1;
		}
		// Right Half is Sorted
		else {
			if (x > arr[mid] and x <= arr[high])
				low = mid + 1;
			else
				high = mid - 1;
		}
	}

	return -1;
}