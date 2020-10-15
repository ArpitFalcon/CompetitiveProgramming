#include<bits/stdc++.h>
using namespace std;

void swap(int &a, int &b) {
	int temp = a;
	a = b;
	b = temp;
}

int partition_last(vector<int> &nums, int l, int r) {
	int pivot = nums[r], start = l;
	for (int i = l; i <= r - 1; i++) {
		if (nums[i] <= pivot) {
			swap(nums[i], nums[start]);
			start++;
		}
	}
	swap(nums[start], nums[r]);
	return start;
}


int kthSmallestElement(vector<int> &nums, int l, int r, int k) {
	// If k is smaller than number of elements in array.
	if (k > 0 and k <= r - l + 1) {
		// Partition the array
		int pos = partition_last(nums, l, r);

		// If pos == k
		if (pos - l == k - 1)
			return nums[pos];
		if (pos - l > k - 1)
			return kthSmallestElement(nums, l, pos - 1, k);

		return kthSmallestElement(nums, pos + 1, r, k - pos + l - 1);
	}

	return INT_MAX;
}


int main()
{
	std::vector<int> v({ 12, 3, 5, 7, 4, 19, 26 });
	int n = v.size(), k = 3;
	cout << "K'th smallest element is " << kthSmallestElement(v, 0, n - 1, k);
	return 0;
}