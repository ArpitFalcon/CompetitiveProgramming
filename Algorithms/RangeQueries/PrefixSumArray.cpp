/******************************************
* AUTHOR : ARPIT *
* NICK : arpitfalcon *
* INSTITUTION : BIT MESRA *
* Ab m game m hu. *
******************************************/

// Precompute in a static array.
int prefsum[1000004];
void preCompute(int arr[], int n) {
	prefsum[0] = 0;
	for (int i = 1; i <= n; i++) {
		prefsum[i] = prefsum[i - 1] + arr[i];
	}
}

// Call the value.
int sumQ(int a, int b) {
	return prefsum[b] - prefsum[a - 1];
}
