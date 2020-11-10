bool DFSRecursive(vector<int> adj[], int s, bool visited[], int parent) {
	visited[s] = true;

	for (int u : adj[s]) {
		if (visited[u] == false) {
			if (DFSRecursive(adj, u, visited, s))
				return true;
		}
		else if (u != parent)
			return true;
	}

	return false;
}


bool isCyclic(vector<int> adj[], int v)
{
	bool visited[v];
	for (int i = 0; i < v; i++)
		visited[i] = false;

	for (int i = 0; i < v; i++)
		if (visited[i] == false)
			if (DFSRecursive(adj, i, visited, -1))
				return true;

	return false;
}