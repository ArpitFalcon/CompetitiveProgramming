int getPeak(int arr[], int n) {
	int low = 0, high = n - 1;

	while (low <= high) {
		int mid = low + (high - low) / 2;
		if ((mid == 0) || (arr[mid - 1] <= arr[mid])) and ((mid == n - 1) or (arr[mid + 1] <= arr[mid]))
			return mid;
		if (mid > 0 and arr[mid - 1] >= arr[mid])
			high = mid - 1;
		else
			low = mid + 1;
	}

	return -1;
}