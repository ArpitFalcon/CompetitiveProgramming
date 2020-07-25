int platforms_to_build(vector<int>& arrival, vector<int>& departure) {
    int n = arrival.size();
    int i = 0, j = 0;
    int platform_needed = 0, max_platforms = 0;

    while (i < n && j < n) {

        if (arrival[i] < departure[j]) {
            platform_needed++;
            i++;
            max_platforms = max(max_platforms, platform_needed);
        }

        else {
            platform_needed--;
            j++;
        }
    }
}

// LeetCode - Not available
// Medium
