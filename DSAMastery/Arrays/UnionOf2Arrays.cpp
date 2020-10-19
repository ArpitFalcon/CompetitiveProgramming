#include <bits/stdc++.h>
using namespace std;

int main() {
	int T, n, m;
	cin >> T;

	while (T--) {
		cin >> n >> m;
		vector<int> arr1(n);
		vector<int> arr2(m);

		vector<int> res(10e5 + 5);

		for (int i = 0; i < n; i++)
			cin >> arr1[i];
		for (int i = 0; i < m; i++)
			cin >> arr2[i];

		int count = 0;
		for (int i = 0; i < n; i++) {
			if (res[arr1[i]] == 0)
				count++;
			res[arr1[i]]++;
		}

		for (int i = 0; i < m; i++) {
			if (res[arr2[i]] == 0)
				count++;
			res[arr2[i]]++;
		}

		cout << count << endl;
	}

	return 0;
}