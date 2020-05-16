void merge(vector<int> &a, int start, int mid, int end) {
	int i = start;
	int j = mid + 1;
	int k = start;

	int n1 = mid - start + 1;
	int n2 = end - mid;

	int l[n1], r[n2];

	for (i = 0; i < n1; i++)
		l[i] = a[i];
	for (j = 0; j < n2; j++)
		r[j] = a[mid + 1 + j];

	i = 0; j = 0;
	while (i < n1 && j < n2) {
		if (l[i] <= r[i]) {
			a[k] = l[i];
			i++;
		}
		else {
			a[k] = r[j];
			j++;
		}
		k++;
	}

	while (i < n1) {
		a[k++] = l[i++];
	}
	while (j < n2) {
		a[k++] = r[j++];
	}
}

void merge_sort(vector<int> &a, int start, int end) {
	if (start < end) {
		int mid = start + (end - start) / 2;
		merge_sort(a, start, mid);
		merge_sort(a, mid + 1, end);
		merge(a, start, mid, end);
	}
}

// Time Complexity - O(LogN)
// Space Complexity - O(N)
// Stable Sort