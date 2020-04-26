/******************************************
* AUTHOR : ARPIT *
* NICK : arpitfalcon *
* INSTITUTION : BIT MESRA *
* Harwork is the key to success. *
******************************************/

// Wines Problem

// An array is given, with cost of wine bottles.
// In 1 year, you have to sell 1 bottle of wine,
// and you can only pick bottle from extreme ends.
// Price of bottle increses every year by as
// in y th year the price will be = price[i] * y
// You have to maximize the profit.

// Greedy approach - Sell the min of both extremes.
// The greedy is wrong here.

// Recursive Approach - 2^n.
// DP Approach - n^2.

#include <bits/stdc++.h>
using namespace std;
#define MOD 1000000007
#define vin ll n; cin>>n; vector<ll>x(n); for(ll i=0; i<n; i++) cin>>x[i]
#define vout for(ll i=0; i<n; i++) cout<<x[i]<<" "
#define T ll t = 1; cin>>t; while(t--)
#define ain ll n, k; cin>>n>>k; ll a[n]; for(ll z=0; z<n; z++) cin>>a[z]
#define aout for(ll i=0; i<n; i++) cout<<a[i]<<" "
#define sin set<ll>s; ll n; cin>>n; ll tmp; for(ll i=0;i<n;i++){cin>>tmp; s.insert(tmp);}
#define sout for(auto it=s.begin();it!=s.end();++it) cout<<*it<<" "
#define pb push_back
#define mp make_pair
#define f(i,a,b) for(ll i=a; i<b; i++)
#define ff first
#define ss second
#define endl "\n"
#define deb(x) cout << #x << "=" << x <<endl
#define deb2(x,y) cout<<#x<<"="<<x<<","<<#y<<"="<<y<<endl
#define max3(a,b,c) max(a,max(b,c))
#define min3(a,b,c) min(a,min(b,c))
#define max4(a,b,c,d) max(a,max3(b,c,d))
#define min4(a,b,c,d) min(a,min3(b,c,d))
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
typedef long long ll;
typedef unsigned long long  ull;
typedef long double ld;

// Top down Approach -

int dp[100][100] = {0};
int profit(int wine[], int i, int j, int y) {
	// Base Case
	if (i > j) return 0;

	// Already computed state
	if (dp[i][j]) return dp[i][j];

	// Recursive Case
	int op1 = wine[i] * y + profit(wine, i + 1, j, y + 1);
	int op2 = wine[j] * y + profit(wine, i, j - 1, y + 1);
	return dp[i][j] = max(op1, op2);
}



int main() {
	fast;
#ifndef _DEBUG
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

	// your code goes here
	int wines[] =  {2, 3, 5, 1, 4}; // Greedy will give 49.
	int n = 5;
	int y = 1;
	cout << profit(wines, 0, n - 1, y);

	return 0;
}