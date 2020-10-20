#include <bits/stdc++.h>
using namespace std;


class Solution {
public:
    int getMinDiff(int arr[], int n, int k) {

        sort(arr, arr + n);
        int median = arr[n / 2];

        for (int i = 0; i < n; i++) {
            // For median case
            if (arr[i] == median) {
                if (median + k > arr[n - 1] - k)
                    arr[i] -= k;
                else
                    arr[i] += k;
            }

            else {

                int add_k = arr[i] + k;
                int minus_k = arr[i] - k;
                if (abs(median - add_k) < abs(median - minus_k))
                    arr[i] = add_k;
                else
                    arr[i] = minus_k;
            }
        }

        for (int i = 0; i < n; i++)
            cout << arr[i] << " ";

        sort(arr, arr + n);
        return arr[n - 1] - arr[0];

    }
};


int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, k;
        cin >> k;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        Solution ob;
        auto ans = ob.getMinDiff(arr, n, k);
        cout << ans << "\n";
    }
    return 0;
}