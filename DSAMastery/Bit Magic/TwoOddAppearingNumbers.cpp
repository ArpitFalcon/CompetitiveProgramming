// O(n) Solution | O(1) Space

vector<int> twoOddAppearing(int arr[], int n) {
	int XOR = 0, res1 = 0, res2 = 0;
	for (int i = 0; i < n; i++)
		XOR = XOR ^ arr[i];

	// Find the rightmost set bit
	int sm = XOR & ~(XOR - 1);

	// Divide the arrays into 2 groups
	for (int i = 0; i < n; i++) {
		if ((arr[i] & sm) != 0)
			res1 = res1 ^ arr[i];
		else
			res2 = res2 ^ arr[i];
	}

	return {res1, res2};
}