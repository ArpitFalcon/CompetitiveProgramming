// Recursive function to print DFS
void DFSRecursive(vector<int> adj[], int s, bool visited[]) {
	visited[s] = true;
	cout << s << " ";
	for (int x : adj[s]) {
		if (visited[x] == false)
			DFSRecursive(adj, v, x, visited);
	}
}


// With Source
void DFS(vector<int> adj[], int v, int s) {
	bool visited [v];
	for (int i = 0; i < v; i++)
		visited[i] = false;

	DFSRecursive(adj, s);
}


// Without Source
void DFS(vector<int> adj[], int v) {
	bool visited[v];
	for (int i = 0; i < v; i++)
		visited[i] = false;

	for (int i = 0; i < v; i++)
		if (visited[i] == false)
			DFSRecursive(adj, i, visited);
}