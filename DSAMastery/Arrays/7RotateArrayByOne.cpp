#include <iostream>
#include <vector>
using namespace std;

void rotateByOne(vector<int> &nums) {
	int n = nums.size(), temp = nums[n - 1];

	for (int i = n - 1; i > 0; i--) {
		nums[i] = nums[i - 1];
	}

	nums[0] = temp;
	return;
}

int main() {
	int T, n;
	cin >> T;

	while (T--) {
		cin >> n;
		vector<int> data(n);

		for (int i = 0; i < n; i++)
			cin >> data[i];

		rotateByOne(data);
		for (auto num : data)
			cout << num << " ";
		cout << endl;
	}
	return 0;
}