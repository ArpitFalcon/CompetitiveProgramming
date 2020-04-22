/******************************************
* AUTHOR : ARPIT *
* NICK : arpitfalcon *
* INSTITUTION : BIT MESRA *
******************************************/

// Longest Increasing Subsequence
// Find longest increasing subsequence in an array of n elements.

vector<int> length(100, 0);
void longestSub(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        length[i] = 1;
        for (int j = 0; j < i; j++) {
            if (arr[j] < arr[i])
                length[i] = max(length[i], length[j] + 1);
        }
    }
}

// We are including the i-th element in couting.
// Try to solve in O(lg N) time. Find it.
// In O(lg N) time :
// Rule 1 = Append if greater.
// Rule 2 = Replace if smaller.
int lengthOfLIS(vector<int>& nums) {
    vector<int>dp;
    for (int x : nums) {
        int pos = lower_bound(dp.begin(), dp.end(), x) - dp.begin();
        if (pos == dp.size()) dp.push_back(x);
        else dp[pos] = x;
    }
    return dp.size();
}



// Input -
// int arr[] = {6, 2, 5, 1, 7, 4, 8, 3};
// int n = 8;

// Output - 
// Length of 0 : 1
// Length of 1 : 1
// Length of 2 : 2
// Length of 3 : 1
// Length of 4 : 3
// Length of 5 : 2
// Length of 6 : 4
// Length of 7 : 2


