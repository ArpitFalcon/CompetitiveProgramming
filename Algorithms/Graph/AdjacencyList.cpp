/******************************************
* AUTHOR : ARPIT *
* NICK : arpitfalcon *
* INSTITUTION : BIT MESRA *
* Ab m bhi game m hu. *
******************************************/

// Graph Structures
// We have a graph and we will make a adjancy list.

// The graph is -
// 0 -> 1, 2
// 1 -> 2, 0
// 2 -> 3, 0, 1
// 3 -> 2

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
	// Array of lists.
	list<int> *l; // l is a pointer to the array of lists.
public :
	// Constructor
	Graph(int V) {
		this -> V = V;
		l = new list<int> [V]; // this is the array of lists.
	}

	// Added an edge between x and y vertices.
	void addEdge(int x, int y) {
		l[x].push_back(y);
		l[y].push_back(x);
	}

	// To show the Adjancency List.
	void printAdjList() {
		// Iterate over all the vertices.
		for (int i = 0; i < V; i++) {
			cout << "Vertex " << i << "-> ";
			for (auto nbr : l[i])
				cout << nbr << " ";
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

	Graph g(4);
	g.addEdge(0, 1);
	g.addEdge(0, 2);
	g.addEdge(2, 3);
	g.addEdge(1, 2);
	g.printAdjList();
	return 0;
}

