bool areRotations (string A, string B) {

	// Pruning
	if (A.size() != B.size())
		return false;

	string temp = A + A;
	// Npos is used to indicate no value was found.
	return (temp.find(B) != string::npos);
}