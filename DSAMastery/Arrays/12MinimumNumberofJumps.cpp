# include <bits/stdc++.h>
using namespace std;


int minNumberofJumps(vector<int> &nums) {

}


int main() {
	int T, n;
	cin >> T;

	while (T--) {
		cin >> n;
		vector<int> data(n);

		for (int i = 0; i < n; i++)
			cin >> data[i];

		cout << minNumberofJumps(data) << endl;
	}
}