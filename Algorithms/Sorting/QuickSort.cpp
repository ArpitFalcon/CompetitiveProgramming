void swap(int &a, int &b) {
	int temp = a;
	a = b;
	b = temp;
}

int partition(vector<int> &a, int low, int high) {
	int pivot = a[high];
	int i = low - 1;

	for (int j = low; j <= high - 1; j++) {
		if (a[j] < pivot) {
			i++;
			swap(a[i], a[j]);
		}
	}

	swap(a[i + 1], a[high]);
	return (i + 1);

}

void quick_sort(vector<int> &a, int start, int end) {
	if (start < end) {
		int pi = partition(a, start, end);
		quick_sort(a, start, pi - 1);
		quick_sort(a, pi + 1, end);
	}
}

// Time Complexity - O(N Log N) Worst Case - O(N^2) when array is already sorted.
// In place
// Unstable sort