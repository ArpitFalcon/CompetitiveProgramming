/******************************************
* AUTHOR : ARPIT *
* NICK : arpitfalcon *
* INSTITUTION : BIT MESRA *
* Ab m game m hu. *
******************************************/

// Graph Structures

// Graph Traversal
// Depth First Search
// Start at any node then go any neighbouring node.
// Then repeat for that node.
// Recursive Process - using stack (since recursion uses stack)
// Can be implemented iteratively by using stack.

#include <bits/stdc++.h>
using namespace std;
#define MOD 1000000007
#define vin ll n; cin>>n; vector<ll>x(n); for(ll i=0; i<n; i++) cin>>x[i]
#define vout for(ll i=0; i<n; i++) cout<<x[i]<<" "
// #define T ll t = 1; cin>>t; while(t--)
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

// Template to pass integer, string, whatever the parameter will be.
template<typename T>
class Graph {
	map<T, list<T>> l;
public :
	void addEdge(int x, int y) {
		l[x].push_back(y);
		l[y].push_back(x);
	}

	void dfs_helper(T src, map<T, bool> &visited) {
		// Recursive function that will traverse the graph.
		cout << src << " ";
		visited[src] = true;
		// Go to any neighbour of that node that is not visited.
		for (T nbr : l[src]) {
			if (!visited[nbr])
				dfs_helper(nbr, visited);
		}
	}

	void dfs(T src) {
		map<T, bool> visited;
		// Mark all the nodes as not visited in beginning.
		for (auto p : l) {
			T node = p.first;
			visited[node] = false;
		}

		// Call the helper the function.
		dfs_helper(src, visited);
	}


};


int main() {
	fast;
#ifndef _DEBUG
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

	// your code goes here

	// <int> to tell that we are going with integer in template.
	Graph<int> g;
	g.addEdge(0, 1);
	g.addEdge(1, 2);
	g.addEdge(2, 3);
	g.addEdge(4, 5);
	g.addEdge(3, 4);
	g.addEdge(0, 3);
	g.dfs(0);

	return 0;
}

