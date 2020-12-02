#include <iostream>
#include <bits/stdc++.h>
using namespace std;

string longestPalindrome(string s) {
    // Using DP
    int n = s.length();
    vector<vector<bool>> palin(n, vector<bool> (n, 0));
    int maxLength = 1, start = 0;

    // For one length palindromes
    for (int i = 0; i < n; i++)
        palin[i][i] = true;

    // For two length palindromes
    for (int i = 0; i < n - 1; i++) {
        if (s[i] == s[i + 1]) {
            palin[i][i + 1] = true;
            if (maxLength < 2) {
                start = i;
                maxLength = 2;
            }
        }
    }

    // For more than 2 length palindromes
    for (int k = 3; k <= n; k++) {
        for (int i = 0; i < n - k + 1; i++) {
            int temp = i + k - 1;
            if (palin[i + 1][temp - 1] and s[i] == s[temp]) {
                palin[i][temp] = true;

                if (maxLength < k) {
                    maxLength = k;
                    start = i;
                }
            }
        }
    }

    string res = "";
    for (int i = start; i <= start + maxLength - 1; i++)
        res += s[i];

    return res;
}

int main() {
    int T; cin >> T; while (T--) {
        string input;
        cin >> input;

        cout << longestPalindrome(input) << endl;
    }
    return 0;
}