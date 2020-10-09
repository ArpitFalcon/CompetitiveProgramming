void TOH(int n, char A, char B, char C) {
	if (n == 1)
		cout << "Move 1 from " << A << " to " << C << endl;

	// A - Source, C - Auxilliary, B - Destination
	TOH(n - 1, A, C, B);
	cout << "Move " << n << " from " << A << " to " << C << endl;

	// B - Source, A - Auxilliary, C - Destination
	TOH(n - 1, B, A, C);
}