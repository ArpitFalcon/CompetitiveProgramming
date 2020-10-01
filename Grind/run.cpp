/******************************************
* AUTHOR : ARPIT *
* NICK : arpitfalcon *
* INSTITUTION : BIT MESRA *
* Ab m game m hu. *
******************************************/

#include <bits/stdc++.h>
using namespace std;
#define MOD 1000000007 -
#define vll vector<ll>
#define vvll vector<vll>
#define pll pair<ll, ll>
#define vpll vector<pll>
#define vin                    \
    ll n;                      \
    cin >> n;                  \
    vector<ll> v(n);           \
    for (ll i = 0; i < n; i++) \
    cin >> v[i]
#define vout                   \
    for (ll i = 0; i < n; i++) \
    cout << v[i] << " "
#define T     \
    ll t = 1; \
    cin >> t; \
    while (t--)
#define ain                    \
    ll n, k;                   \
    cin >> n >> k;             \
    ll a[n];                   \
    for (ll z = 0; z < n; z++) \
    cin >> a[z]
#define aout                   \
    for (ll i = 0; i < n; i++) \
    cout << a[i] << " "
#define pb push_back
#define mp make_pair
#define ff first
#define ss second
#define endl "\n"
#define deb(x) cout << #x << "=" << x << endl
#define deb2(x, y) cout << #x << "=" << x << "," << #y << "=" << y << endl
#define max3(a, b, c) max(a, max(b, c))
#define min3(a, b, c) min(a, min(b, c))
#define max4(a, b, c, d) max(a, max3(b, c, d))
#define min4(a, b, c, d) min(a, min3(b, c, d))
#define blink                \
    ios::sync_with_stdio(0); \
    cin.tie(0);              \
    cout.tie(0);
typedef long long ll;
typedef unsigned long long ull;
typedef long double ld;
const double PI = 3.141592653589793238463;

#define forn(i, n) for (ll(i) = 0; (i) < (n); ++(i))
#define for1(i, n) for (ll(i) = 1; (i) <= (n); ++(i))
#define forr(i, n) for (ll(i) = (n)-1; (i) >= 0; --(i))
#define forab(i, a, b, c) for (ll(i) = a; (i) <= (b); (i) += (c))

/*
__builtin_ffs(x)
  Number of set bits: __builtin_popcount(x)
  Number of leading zeroes: __builtin_clz(x)
  Number of trailing zeroes : __builtin_ctz(x)
*/

int findMedian(vector<ll> &arr, int n)
{
    sort(arr.begin(), arr.end());

    if (n & 1)
        return arr[n / 2];
    else
    {
        int mid = n / 2;
        return (arr[mid - 1] + arr[mid]) / 2;
    }
}

int main()
{
    blink
#ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    // your code goes here
    vin;

    ll sadness = 0;
    ll sum = 0;
    vector<ll> newArr;

    for (int i = 1; i <= n; i++)
    {
        newArr.push_back(v[i - 1] - i);
    }

    int b = findMedian(newArr, newArr.size());

    for (int i = 1; i <= n; i++)
    {
        sadness += abs(v[i - 1] - (b + i));
    }
    int sadness_pseudo = 0;
    for (int i = 1; i <= n; i++)
    {
        sadness_pseudo += abs(v[i - 1] - (b + 1 + i));
    }

    cout << min(sadness, sadness_pseudo);
    return 0;
}