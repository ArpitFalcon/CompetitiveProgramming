void nthNode (Node* head, int n) {
	if (head == NULL)
		return;

	Node* first = head;
	for (int i = 0; i < n; i++) {
		if (first == NULL)
			return;
		first = first -> next;
	}

	Node *second = head;
	while (first != NULL) {
		first = first->next;
		second = second->next;
	}

	cout << second->data;
}