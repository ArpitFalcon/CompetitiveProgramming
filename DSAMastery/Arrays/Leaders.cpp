void leaderInAnArray(int arr[], int n) {
	int current_leader = arr[n - 1];
	cout << current_leader << " ";

	for (int i = n - 2; i >= 0; i++) {
		if (current_leader < arr[i]) {
			current_leader = arr[i];
			cout << current_leader << " ";
		}
	}
}