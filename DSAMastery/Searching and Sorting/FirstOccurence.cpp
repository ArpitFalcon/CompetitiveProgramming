int firstO(int arr[], int low, int high, int x) {
	if (low < high) return -1;

	int mid = low + (high - low) / 2;

	if (x > arr[mid])
		return firstO(arr, mid + 1, high, x);
	else if (x < arr[mid])
		return firstO(arr, low, mid - 1, x);
	else {
		if (mid == 0 or arr[mid - 1] != arr[mid])
			return mid;
		else
			return firstO(arr, low, mid - 1, x);
	}
}