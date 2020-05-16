void swap(int &a, int &b) {
	int temp = a;
	a = b;
	b = temp;
}

void bubble_sort(vector<int> &a, int n) {

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n - i - 1; j++) {
			if (a[j] > a[j + 1]) {
				swap(a[j], a[j + 1]);
			}
		}
	}
}

// Time complexity - O(N^2)  Best - O(N)
// In place 
// Stable Sort