#include <bits/stdc++.h>
using namespace std;


int returnLast (vector<int> &nums, int n, int target) {
	int low = 0;
	int high = n - 1;

	while (low < high) {
		int mid = low + (high - low) / 2;

		if (nums[mid] <= target)
			low = mid + 1;

		if (nums[mid] > target)
			high = mid;
	}

	// Sanity Check
	if (nums[low - 1] == target)
		return low - 1;
	return -1;

}

int returnFirst (vector<int> &nums, int n, int target) {
	int low = 0;
	int high = n - 1;

	while (low < high) {
		int mid = low + (high - low + 1) / 2;

		if (nums[mid] < target)
			low = mid;

		if (nums[mid] >= target)
			high = mid - 1;
	}

	// Sanity Check
	if (nums[low + 1] == target)
		return low + 1;
	return -1;
}


int main() {
	int T; cin >> T; while (T--) {
		int n, target;
		cin >> n >> target;

		vector<int> nums(n);
		for (int i = 0; i < n; i++)
			cin >> nums[i];

		int first = returnFirst(nums, n, target);
		int last =  returnLast(nums, n, target);

		if (first == -1)
			cout << "-1" << endl;
		else
			cout << first << ' ' << last << endl;

	}
}