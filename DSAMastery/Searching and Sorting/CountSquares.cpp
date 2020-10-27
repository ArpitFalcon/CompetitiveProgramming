int countSquares(int N) {
    int low = 1, high = N / 2;
    long long int mid;
    long long int ans = 0;

    while (low < high) {
        mid = low + (high - low) / 2;

        if (mid * mid == N) {
            ans = mid;
            break;
        }

        else if (mid * mid > N) {
            high = mid;
        }

        else {
            low = mid + 1;
        }
    }

    if (!ans)
        ans = low;

    return ans - 1;
}