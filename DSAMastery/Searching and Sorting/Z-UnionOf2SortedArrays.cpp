void unionOfTwoSorted(int a[], int b[], int n, int m) {
	int i = 0; j = 0;

	while (i < n and j < m) {
		// Removing Duplicates
		if (i > 0 and a[i - 1] == a[i]) {
			i++; continue;
		}
		if (j > 0 and b[j - 1] == b[j]) {
			j++; continue;
		}

		// Printing the union elements
		if (a[i] < b[j]) {
			cout << a[i] << " ";
			i++;
		}
		else if (a[i] > b[j]) {
			cout << b[i] << " ";
			j++;
		}
		else {
			cout << a[i] << " ";
			i++; j++;
		}
	}

	while (i < n) {
		if (i == 0 or a[i] != a[i - 1]) {
			cout << a[i] << " ";
			i++;
		}
	}

	while (j < m) {
		if (j == 0 or b[j] != b[j - 1]) {
			cout << b[j] << " ";
			j++;
		}
	}
}