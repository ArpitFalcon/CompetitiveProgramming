/******************************************
* AUTHOR : ARPIT *
* NICK : arpitfalcon *
* INSTITUTION : BIT MESRA *
* Harwork is the key to success. *
******************************************/


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



bool is_safe(int board[][10], int i, int j, int n) {
	for (int row = 0; row < i; row++) {
		if (board[row][j] == 1) return false;
	}

	int x = i;
	int y = j;
	while (x >= 0 && y >= 0) {
		if (board[x][y] == 1) return false;
		x--; y--;
	}

	x = i;
	y = j;
	while (x >= 0 && y < n) {
		if (board[x][y] == 1) return false;
		x--; y++;
	}

	return true;
}

bool n_queen(int board[][10], int i,  int n) {
	if (i == n) return true;
	for (int j = 0; j < n; j++) {
		if (is_safe(board, i, j, n)) {
			board[i][j] = 1;
			bool next = n_queen(board, i + 1, n);
			if (next) return true;
		}
		board[i][j] = 0;
	}
	return false;
}


int main() {
	fast;
#ifdef _DEBUG
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

	// your code goes here

	ll n; cin >> n;
	int board[10][10] = {0};
	if (n_queen(board, 0, n)) {
		cout << "YES" << endl;
		for (int i = 0; i < n; i++) {
			for (int j = 0; j < n; j++) {
				cout << board[i][j] << " ";
			}
			cout << endl;
		}
	}
	else {
		cout << "NO";
	}
	return 0;
}