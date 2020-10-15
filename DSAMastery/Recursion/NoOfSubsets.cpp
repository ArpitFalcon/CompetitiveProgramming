#include<bits/stdc++.h>
using namespace std;

void noOfSubsetsHelper(vector<int> &nums, int sum, int index, int &count) {
	// Positive Base Case
	if (sum == 0)
		count++;

	// Negative Base Case
	if (sum < 0)
		return;

	if (index >= nums.size())
		return;

	// Recursive Case
	// Exclude Case
	noOfSubsetsHelper(nums, sum, index + 1, count);

	// Include Case
	noOfSubsetsHelper(nums, (sum - nums[index]), index + 1, count);
}


int noOfSubsets(vector<int> &nums, int sum) {
	int count = 0;
	vector<int> currentSet;
	noOfSubsetsHelper(nums, sum, 0, count);
	return count;
}


int main() {
	std::vector<int> v({10, 5, 2, 3, 6});
	cout << noOfSubsets(v, 8) << endl;
}