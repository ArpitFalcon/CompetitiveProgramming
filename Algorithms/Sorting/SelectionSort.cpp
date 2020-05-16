void swap(int &a, int &b) {
	int temp = a;
	a = b;
	b = temp;
}

void selection_sort(vector<int> &a, int n) {

	int min_index;
	for (int i = 0; i < n - 1; i++) {
		min_index = i;
		for (int j = i + 1; j < n; j++) {
			if (a[j] < a[min_index]) {
				min_index = j;
			}
		}
		swap(a[min_index], a[i]);
	}

}

// Time complexity - O(N^2) Best - O(N^2)
// In place
// Not stable