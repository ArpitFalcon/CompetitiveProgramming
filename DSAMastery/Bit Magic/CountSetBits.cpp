// O(number of bits) Time
void countBits(int n) {
	int res = 0;
	while (n > 0) {
		res += (n & 1);
		n = n >> 1;
	}

	return res;
}


// O(set bit count)
// Brian Kerningam's Algorithm - Switch off the last set bit.
void countBits(int n) {
	int res = 0;
	while (n > 0) {
		n = (n & (n - 1));
		res++;
	}

	return res;
}