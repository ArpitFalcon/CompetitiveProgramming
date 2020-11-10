#include <bits/stdc++.h>
using namespace std;


// Add edge between 2 vertices - u and v.
void addEdge(vector<int> adj[], int u, int v) {
	adj[u].push_back(v);
	adj[v].push_back(u);
}


// Print the graph
void printGraph(vector<int> adj[], int v) {
	for (int i = 0; i < v; i++) {
		for (int x : adj[i])
			cout << x << " ";

		cout << endl;
	}
}


int main() {
	int v = 4;
	vector<int> adj[v];
	add(adj, 0, 1);
}