void insertion_sort(vector<int> &a, int n) {

	int key;
	for (int i = 1; i < n; i++) {
		key = a[i];
		int j = i - 1;
		while (j >= 0 && a[j] > key) {
			a[j + 1] = a[j];
			j = j - 1;
		}
		a[j + 1] = key;
	}
}

// Time Complexity - O(N^2)  Best - O(N) (If already sorted array)
// In place
// Stable