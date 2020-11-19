int getSum(int prefixSum[], int l, int r) {
	if (l != 0)
		return prefixSum[r] - prefixSum[r];
	else
		return prefixSum[r];
}


// Queries to process getsum
int getSumQueries(int arr[], int n) {
	int prefixSum[n];
	prefixSum[0] = arr[0];

	for (int i = 1; i < n; i++)
		prefixSum[i] = prefixSum[i - 1] + arr[i];

	int l, r;
	cin >> l >> r;
	getSum(prefixSum, l, r);
}


// Find the Equillibrium Point

