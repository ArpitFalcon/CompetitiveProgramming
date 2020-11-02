struct Node {
	int data;
	Node* next;

	Node (int x) {
		data = x;
		next = NULL;
	}
}


// Delete First Node
Node* delHead (Node *head) {
	if (head == NULL)
		return NULL;

	Node *temp = head->next;
	delete(head);
	return temp;
}


// Delete Tail Node
Node* delTail(Node *head) {
	if (head == NULL)
		return NULL;

	if (head -> next == NULL)
		return NULL;

	Node* curr = head;
	while (curr->next->next != NULL)
		curr = curr->next;

	delete(curr->next);
	curr->next = NULL;
	return head;
}