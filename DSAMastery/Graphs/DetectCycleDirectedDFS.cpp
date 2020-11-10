bool DFSRecursive(vector<int> adj[], int s, bool visited[], bool recursionStack[]) {
	visited[s] = true;
	recursionStack[s] = true;

	for (int u : adj[s]) {
		if (visited[u] == false and DFSRecursive(adj, u, visited, recursionStack))
			return true;
		else if (recursionStack[u] == true)
			return true;
	}

	recursionStack[s] = false;
	return false;
}


bool cycleDetection(vector<int> adj[], int v) {
	bool visited [v];
	bool recursionStack[v];

	for (int i = 0; i < v; i++) {
		visited[i] = false;
		recursionStack[i] = false;
	}

	for (int i = 0; i < v; i++)
		if (visited[i] == false)
			if (DFSRecursive(adj, i, visited, recursionStack) == true)
				return true;

	return false;
}