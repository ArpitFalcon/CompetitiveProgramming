////////////////////////////////////////////////////////////////////////////////
////                     First Version - Source Given						////
////////////////////////////////////////////////////////////////////////////////
void BFS(vector<int> adj[], int v, int s) {
	bool visited[v + 1];
	for (int i = 0; i < v; i++)
		visited[i] = false;

	queue<int> q;
	visited[s] = true;
	q.push(s);

	while (q.empty() == false) {
		int u = q.front();
		q.pop();
		cout << u << " ";

		// Putting it's adjacent connected vertices which are not visited.
		for (int v : adj[u]) {
			if (!visited[v]) {
				visited[v] = true;
				q.push(v);
			}
		}
	}
}


////////////////////////////////////////////////////////////////////////////////
////     Second Version - Source not given, possible disconnected graphs.   ////
////                     Print all the vertices.							////
////////////////////////////////////////////////////////////////////////////////
// BFS Function
void BFS(vector<int> adj[], int v, int s, bool visited[]) {
	queue<int> q;
	visited[s] = true;
	q.push(s);

	while (q.empty() == false) {
		int u = q.front();
		q.pop();
		cout << u << " ";

		// Putting it's adjacent connected vertices which are not visited.
		for (int v : adj[u]) {
			if (!visited[v]) {
				visited[v] = true;
				q.push(v);
			}
		}
	}
}


// Primary function
void BFSDin(vector<int> adj[], int v) {
	bool visited[v + 1];
	for (int i = 0; i < v; i++)
		visited[i] = false;

	// Print the vertice if it's not visited yet
	for (int i = 0; i < v; i++)
		if (visited[i] == false)
			BFS(adj, v, i, visited);
}