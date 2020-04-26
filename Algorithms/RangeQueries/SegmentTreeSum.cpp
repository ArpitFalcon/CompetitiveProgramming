/******************************************
* AUTHOR : ARPIT *
* NICK : arpitfalcon *
* INSTITUTION : BIT MESRA *
* Ab m game m hu. *
******************************************/


// Segment Tree to find query in a dynamic array (values can change).
// It can return the query and can modify a value in O(lgN) time.
// Learn and add the recursive method too.

const int N = 100000;
int tree[2 * N];
void build(int arr[], int n) {
	for (int i = 0; i < n; i++) {
		tree[n + i] = arr[i];
	}
	// Calculating Parents, This is sum.
	// We can change to calculate something else such as min, max, xor, or, and.
	for (int i = n - 1; i > 0; i--) {
		tree[i] = tree[i << 1] + tree[i << 1 | 1];
	}
}

void updateTreeNode(int p, int value, int n) {
	p = p + n;
	tree[p] += value;

	for (int i = p; i > 1; i >>= 1) {
		tree[i >> 1] = tree[i] + tree[i ^ 1];
	}
}

// This the query to find sum, we can change it to find other things.
int query(int l, int r, int n) {
	int res = 0;
	l += n; r += n;
	while (l <= r) {
		if (l % 2) res += tree[l++];
		if (!(r % 2)) res += tree[r--];
		l /= 2; r /= 2;
		deb(res);
	}
	return res;
}
