int majorityElement(vector<int> &data, int n) {
	unordered_map<int, int> count;
	for (int i = 0; i < n; i++)
		count[data[i]]++;

	int res = -1;
	for (auto num : count)
		if (num.second > n / 2)
			res = num.first;

	return res;
}


// Moore's Voting Algorithm
// O(N) Time | O(1) Space
int majorityElement(vector<int> &data, int n) {
	int maj_index = 0, count = 1;

	for (int i = 1; i < n; i++) {
		if (data[maj_index] == a[i])
			count++;
		else
			count--;

		if (count == 0) {
			maj_index = i;
			count = 1;
		}
	}

	int maj_count = 0;
	for (int i = 0; i < n; i++) {
		if (data[i] == data[maj_index])
			maj_count++;
	}


	if (maj_count > n / 2)
		return data[maj_index];
	else
		return -1;
}