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


//////////////////////////////////////////////////////
// BFS Implementation of Topological Sort - Kahn's Algorithm
void topologicalSortBFS(vector<int> adj[], int v) {
	// Storing the indegree of all vertices
	int indegree[v];
	for (int i = 0; i < v; i++) {
		for (int x : adj[i])
			indegree[x]++;
	}

	// Push all the elements with indegree - 0
	queue<int> sortedNums;
	for (int i = 0; i < v; i++)
		if (indegree[i] == 0)
			sortedNums.push(i);

	while (sortedNums.empty() == false) {
		// Print the number
		int u = sortedNums.top();
		sortedNums.pop();
		cout << u << " ";

		// Reduct the indegree by one.
		for (int x : adj[u]) {
			indegree[x]--;
			// If zero push into queue.
			if (indegree[x] == 0)
				sortedNums.push(x);
		}
	}
}