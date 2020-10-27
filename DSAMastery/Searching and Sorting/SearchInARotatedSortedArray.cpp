class Solution {
public:
    int search(vector<int>& nums, int target) {
        int n = nums.size();
        // Edge
        if (n == 0)
            return -1;

        int low = 0, high = n - 1;

        while (low < high) {
            int mid = low + (high - low) / 2;
            if (nums[mid] > nums[high])
                low = mid + 1;
            else
                high = mid;
        }

        int pivot = low;
        low = 0, high = n - 1;

        if (target >= nums[pivot] and target <= nums[high])
            low = pivot;
        else
            high = pivot;

        while (low <= high) {
            int mid = low + (high - low) / 2;
            if (nums[mid] == target)
                return mid;
            else if (nums[mid] > target)
                high = mid - 1;
            else
                low = mid + 1;
        }

        return -1;
    }
};