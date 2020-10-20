#include <bits/stdc++.h>
using namespace std;

int kadaneAlgo(vector<int> &name) {
	int max_so_far = INT_MIN, ending = 0;

	for (int i = 0; i < n; i++) {
		ending = ending + a[i];
		if (max_so_far < ending)
			max_so_far = ending;

		if (ending < 0)
			ending = 0;
	}

	return max_so_far;
}


int main () {
	vector<int> data;
	data = {1, 2, 6, 2, 6, -11, 3};

	cout << kadaneAlgo(data);
	return 0;
}