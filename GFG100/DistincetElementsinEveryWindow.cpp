#include <bits/stdc++.h>
using namespace std;

vector <int> countDistinct(int[], int, int);

int main()
{
    int t;
    cin >> t;
    while (t--)
    {

        int n, k;
        cin >> n >> k;
        int a[n];
        for (int i = 0; i < n; i++)
            cin >> a[i];
        vector <int> result = countDistinct(a, n, k);
        for (int i : result)
            cout << i << " ";
        cout << endl;
    }
    return 0;
}


vector <int> countDistinct (int A[], int n, int k)
{

    unordered_map<int, int> m;
    vector<int> res;

    for (int i = 0; i < k; i++) {
        m[A[i]]++;
    }

    res.push_back(m.size());

    for (int i = 1; i < n - k + 1; i++) {
        m[A[i - 1]]--;
        m[A[i + k - 1]]++;

        if (m[A[i - 1]] == 0)
            m.erase(A[i - 1]);

        res.push_back(m.size());
    }

    return res;
}