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

ll findMedian(vector<ll> &arr, ll n)
{
    sort(arr.begin(), arr.end());

    if (n & 1)
        return arr[n / 2];
    else
    {
        ll mid = n / 2;
        return (arr[mid - 1] + arr[mid]) / 2;
    }
}

ll gcd(ll a, ll b)
{
    if (b == 0)
        return a;
    return gcd(b, a % b);
}

ll findGCD(vector<ll> &arr, ll n)
{
    int res = arr[0];
    for (int i = 1; i < n; i++)
    {
        res = gcd(arr[i], res);

        if (res == 1)
            return 1;
    }

    return res;
}

ll findLCM(vector<ll> &arr, ll n)
{
    ll ans = arr[0];
    for (int i = 1; i < n; i++)
        ans = (((arr[i] * ans)) / (gcd(arr[i], ans)));
    return ans;
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

    ll lcm_arr = findLCM(v, v.size());
    ll m = lcm_arr - 1;
    ll ans = 0;

    for (int i = 0; i < n; i++)
        ans += (m % v[i]);

    cout << ans;
}