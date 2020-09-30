#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> a(n);
    vector<int> b(n);

    for (int i = 0; i < n; i++)
        cin >> a[i];
    for (int i = 0; i < n; i++)
        cin >> b[i];

    // Sort the arrays
    sort(a.begin(), a.end());
    sort(b.begin(), b.end());

    int ans1, ans2, ap = 0, bp = 0, minRun = 0;
    int an = a.size(), bn = b.size();
    ans1 = a[ap];
    ans2 = b[bp];
    minRun = abs(a[ap] - b[bp]);
    while (ap < an - 1 || bp < bn - 1)
    {
        int aIncrement, bIncrement;
        aIncrement = abs(a[ap + 1] - b[bp]);
        bIncrement = abs(a[ap] - b[bp + 1]);

        if (aIncrement < bIncrement && aIncrement < minRun)
        {
            ans1 = a[ap + 1];
            ans2 = b[bp];
            minRun = aIncrement;
            ap++;
        }
        if (aIncrement > bIncrement && bIncrement < minRun)
        {
            ans1 = a[ap];
            ans2 = b[bp + 1];
            minRun = bIncrement;
            bp++;
        }
    }

    cout << ans1 << " " << ans2;
}