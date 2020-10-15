#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int middle(int A, int B, int C) {
        if ((A >= B and A <= C) or (A <= B and A >= C))
            return A;
        else if ((B >= A and B <= C) or (B <= A and B >= C))
            return B;
        else
            return C;
    }
};

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int A, B, C;
        cin >> A >> B >> C;
        Solution ob;
        cout << ob.middle(A, B, C) << "\n";
    }
    return 0;
}