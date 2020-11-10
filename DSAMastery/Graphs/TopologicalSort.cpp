// The dependant jobs should come later and
// the jobs on which they are dependant should appear first.

// DFS based solution.
void DFSRecursive(vector<int> adj[], int u, bool visited[], stack<int> &sortedNums) {
	visited[u] = true;

	for (int x : adj[u]) {
		if (visited[x] == false)
			DFSRecursive(adj, x, visited);
	}

	sortedNums.push(u);
}


// Primary Function
void topologicalSort(vector<int> adj[], int v) {
	stack<int> sortedNums;

	bool visited[v];
	for (int i = 0; i < v; i++)
		visited[i] = false;

	for (int i = 0; i < v; i++)
		if (visited[u] != true)
			DFSRecursive(adj, i, visited, sortedNums);

	while (sortedNums.empty() != true) {
		cout << sortedNums.top() << " ";
		sortedNums.pop();
	}
}