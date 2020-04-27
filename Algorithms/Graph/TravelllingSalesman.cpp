/******************************************
* AUTHOR : ARPIT *
* NICK : arpitfalcon *
* INSTITUTION : BIT MESRA *
* Ab m game m hu. *
******************************************/

/*

** Travelling Salesman Problem **

Salesman travels few points and return to the starting point.
Return the minimum distance in which he can do this.
If not connected then distance is INT_MAX.

Concept - Minimum weight hamiltonian cycle.

It'll take around O((n-1)!) time. So, we'll use top down DP Approach.

We'll make the adjacency matrix to iterate over all the neighbours using recursion.

Store set of cities visited so far in the current branch.
We'll use bit masking for this.

*/

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

int n = 4;
int dist[10][10] = {
	{0, 29, 42, 25},
	{20, 0, 30, 34},
	{42, 30, 0, 10},
	{25, 34, 10, 0}
};

int dp[16][4];

// If all cities have been visited
int visited_all = (1 << n) - 1;

int tsp(int mask, int pos) {
	if (mask == visited_all) return dist[pos][0];

	// Lookup in dp array.
	if (dp[mask][pos] != -1) return dp[mask][pos];

	int ans = INT_MAX;
	// Try to go to an unvisited city.
	for (int city = 0; city < n; city++) {
		// Checking if the city is visited or not.
		if ((mask & (1 << city)) == 0) {
			int newAns = dist[pos][city] + tsp(mask | (1 << city), city);
			ans = min(ans, newAns);
		}
	}
	return dp[mask][pos] = ans;
}



int main() {
	fast;
#ifndef _DEBUG
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

	// your code goes here
	for (int i = 0; i < (1 << n); i++) {
		for (int j = 0; j < 4; j++) {
			dp[i][j] = -1;
		}
	}

	// 1 here says, we are starting from A.
	cout << tsp(1, 0);



	return 0;
}
