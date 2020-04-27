/******************************************
* AUTHOR : ARPIT *
* NICK : arpitfalcon *
* INSTITUTION : BIT MESRA *
* Harwork is the key to success. *
******************************************/

// Graph Structures

// We will make a weighted graph this time.
// Using hashmaps.

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

class Graph {
	int V;
	// Hashmap to store the adjacency list.
	unordered_map<string, list<pair<string, int>>> l;
public :

	// Added an edge between x and y vertices with the check -
	// If it is a bidirectional edge and it's weight.
	void addEdge(string x, string y, bool bidir, int wt) {
		l[x].push_back(make_pair(y, wt));
		if (bidir)
			l[y].push_back(make_pair(x, wt));
	}

	// To show the Adjancency List.
	void printAdjList() {
		// Iterate over all the vertices.
		for (auto p : l) {
			string city = p.first;
			list<pair<string, int>> nbrs = p.second;
			cout << city << " -> ";
			for (auto nbr : nbrs) {
				string dest = nbr.first;
				int dis = nbr.second;

				cout << dest << " " << dis << ", ";
			}
			cout << endl;
		}
	}
};


int main() {
	fast;
#ifndef _DEBUG
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

	// your code goes here

	Graph g;
	g.addEdge("A", "B", true, 20);
	g.addEdge("B", "D", true, 40);
	g.addEdge("A", "C", true, 10);
	g.addEdge("C", "D", true, 40);
	g.addEdge("A", "D", false, 50);
	g.printAdjList();
	return 0;
}

