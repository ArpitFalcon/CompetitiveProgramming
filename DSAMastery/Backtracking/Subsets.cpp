class Solution {
public:

    // The decision here is Include / Exclude
    vector<vector<int>> f(vector<int> &nums, int i) {
        // Base Step
        if (i == nums.size())
            return {{}};

        // Recursive Step
        vector<vector<int>> temp;

        // Subproblem
        temp = f(nums, i + 1);

        // Recurrence Relation
        // Combine the solution of the subproblems to solve the actual problem.
        vector<vector<int>> res;

        // Exclude Step
        res = temp;

        // Include
        for (int j = 0; j < temp.size(); j++) {
            // Append nums[i] to temp[i]
            temp[j].push_back(nums[i]);

            // Append the result to the ultimate result.
            res.push_back(temp[j]);
        }

        return res;
    }

    vector<vector<int>> subsets(vector<int>& nums) {
        return f(nums, 0);
    }
};

// Solution to
// Leetcode - https://leetcode.com/problems/subsets/