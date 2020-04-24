/******************************************
* AUTHOR : ARPIT *
* NICK : arpitfalcon *
* INSTITUTION : BIT MESRA *
* Ab m game m hu. *
******************************************/


// Binary Indexed Tree for dynamic array. Index starting from 1.
// We can update the values and get sum in O(lgN) time.
// The i-th index store the sum till highest power of 2 that divides i.
// Example - tree[5] will store only 5.
// 			 tree[6] will store 5, 6.
// 			 tree[4] will store 1, 2, 3, 4.

int BITree[100000] = {0};
int getSum(int index) {
	int sum = 0;
	while (index) {
		sum += BITree[index];
		index -= index & (-index);
	}
	return sum;
}

void updateBIT(int n, int index, int val) {
	while (index <= n) {
		BITree[index] += val;
		index += index & (-index);
	}
}

void constructBITree(int arr[], int n) {
	for (int i = 1; i <= n; i++) {
		updateBIT(n, i, arr[i - 1]);
	}
}

// To get the sum betweem some range [a, b].
// int answer = getSum(b) - getSum(a - 1);