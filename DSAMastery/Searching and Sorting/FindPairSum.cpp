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