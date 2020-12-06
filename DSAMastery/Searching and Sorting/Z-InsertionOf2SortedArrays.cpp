void intersection(int a[], int b[], int m, int n) {
	int i = 0, j = 0;
	while (i < n and j < m) {
		if (i > 0 and a[i - 1] == a[i]) {
			i++;
			continue;
		}
		if (a[i] < b[i])
			i++;
		else if (a[i] > b[i])
			j++;
		else {
			cout << a[i] << " ";
			i++; j++;
		}
	}
}