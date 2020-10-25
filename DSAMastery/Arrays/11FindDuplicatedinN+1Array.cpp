class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        int fast = nums[0], slow = nums[0];

        // Finding the intersection point
        while (1) {
            slow = nums[slow];
            fast = nums[nums[fast]];

            if (slow == fast)
                break;
        }

        // Finding the entrance of the cycle
        slow = nums[0];
        while (slow != fast) {
            slow = nums[slow];
            fast = nums[fast];
        }

        return fast;
    }
};