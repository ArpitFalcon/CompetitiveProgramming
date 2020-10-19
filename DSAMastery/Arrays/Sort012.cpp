#include <bits/stdc++.h>
using namespace std;

void sort012(vector<int> &nums) {
	int n = nums.size();
	int low = 0, high = n - 1, curr = 0;

	while (curr <= high) {
		if (nums[curr] == 0) {
			swap(nums[curr], nums[low]);
			low++; curr++;
		}
		else if (nums[curr] == 1) {
			curr++;
		}
		else {
			swap(nums[curr], nums[high]);
			high--;
		}
	}

	return;
}

int main() {

	int T, n;
	cin >> T;
	while (T--) {
		cin >> n;
		vector<int> arr(n);
		for (int i = 0; i < n; i++)
			cin >> arr[i];

		sort012(arr);

		for (auto num : arr)
			cout << num << " ";

		cout << endl;
	}

	return 0;
}