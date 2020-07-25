void spiralOrder(vector<int> nums) {
    int n = nums.size();
    for (int i = 0; i < n; i++) {
        nums[nums[i] % n] = n + nums[nums[i] % n];
    }

    for (int i = 0; i < n; i++) {
        cout << i << "->" << nums[i] / n;
    }
}

// LeetCode - Not available
// Easy
