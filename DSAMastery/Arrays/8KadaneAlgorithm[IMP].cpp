#include <bits/stdc++.h>
using namespace std;

int kadaneAlgo(vector<int> &nums) {
	int n = nums.size();

	int max_so_far = INT_MIN, max_ending_here = 0;
	for (int i = 0; i < n; i++) {

		max_ending_here = max_ending_here + nums[i];

		if (max_so_far < max_ending_here)
			max_so_far = max_ending_here;

		if (max_ending_here < 0)
			max_ending_here = 0;

	}

	return max_so_far;
}

int main() {

	int T, n;
	cin >> T >> n;
	while (T--) {
		cin >> n;
		vector<int> data(n);

		for (int i = 0; i < n; i++)
			cin >> data[i];

		int ans = kadaneAlgo(data);
		cout << ans << endl;
	}


	return 0;
}