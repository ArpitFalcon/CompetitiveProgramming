bool isPalin(string S, int s, int e) {
	// Base Case
	if (s == e)
		return true;
	if (s > e)
		return true;

	// Recursive Case
	if (S[s] != S[e])
		return false;

	return isPalin(S, s + 1, e - 1);
}