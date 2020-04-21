/******************************************
* AUTHOR : ARPIT *
* NICK : arpitfalcon *
* INSTITUTION : BIT MESRA *
******************************************/

// Coin Problem - Minimum no. of coins to achieve a sum.
// Can't use Greedy. DP Approach.

// Top Down Approach - Recursion with Memoization

int minCoinss[100];
int coinsTD(int coins[], int n, int sum) {
    if (sum == 0) return 0;
    if (minCoinss[sum]) return minCoinss[sum];

    int ans = INT_MAX;
    for (int i = 0; i < n; i++) {
        if (sum - coins[i] >= 0) {
            int subProb = coinsTD(coins, n, (sum - coins[i]));
            ans = min(ans, subProb + 1);
        }
    }
    minCoinss[sum] = ans;
    return minCoinss[sum];
}


// Bottom Up Approach - Iterative Method

int coinsBU(int coins[], int n, int sum) {
    int minCoins[100] = {0};

    // Iterate over all values till sum.
    for (int i = 1; i <= sum; i++) {
        // Inititate the current as maximum value.
        minCoins[i] = INT_MAX;
        for (int j = 0; j < n; j++) {
            if (i - coins[j] >= 0) {
                int subProb = minCoins[i - coins[j]];
                minCoins[i] = min(minCoins[i], subProb + 1);
            }
        }
    }
    return minCoins[sum];
}


