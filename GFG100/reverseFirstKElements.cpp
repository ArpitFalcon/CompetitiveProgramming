// { Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;
#define ll long long
queue<ll> modifyQueue(queue<ll> q, int k);
int main()
{
    ll t;
    cin >> t;
    while (t-- > 0)
    {
        ll n, k;
        cin >> n >> k;
        queue<ll> q;
        while (n-- > 0)
        {
            ll a;
            cin >> a;
            q.push(a);
        }
        queue<ll> ans = modifyQueue(q, k);
        while (!ans.empty())
        {
            int a = ans.front();
            ans.pop();
            cout << a << " ";
        }
        cout << endl;
    }
} // } Driver Code Ends

//User function Template for C++

queue<ll> modifyQueue(queue<ll> q, int k)
{
    //add code here.
    int n = q.size();

    stack<ll> temp;
    for (int i = 0; i < k; i++)
    {
        temp.push(q.front());
        q.pop();
    }

    for (int i = 0; i < k; i++)
    {
        q.push(temp.top());
        temp.pop();
    }

    for (int i = 0; i < n - k; i++)
    {
        ll alpha = q.front();
        q.pop();
        q.push(alpha);
    }

    return q;
}