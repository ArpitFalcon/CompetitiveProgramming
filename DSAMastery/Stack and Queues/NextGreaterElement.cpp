#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

void nextGreaterElement(vector<ll> &nums, int n) {

	stack<ll> temp;
	stack<ll> res;

	res.push(-1);
	temp.push(nums[n - 1]);

	for (int i = n - 2; i >= 0; i--) {
		while (!temp.empty() and temp.top() <= nums[i])
			temp.pop();

		ll toPush = (temp.empty()) ? (-1) : (temp.top());
		res.push(toPush);
		temp.push(data[i]);
	}

	while (!res.empty()) {
		cout << res.top() << " ";
		res.pop();
	}

	return;
}


int main() {
	int T; cin >> T;
	while (T--) {
		int n;
		cin >> n;

		vector<int> nums(n);

		for (int i = 0; i < n; i++)
			cin >> nums[i];

		nextGreaterElement(nums, n);
		cout << endl;
	}
}