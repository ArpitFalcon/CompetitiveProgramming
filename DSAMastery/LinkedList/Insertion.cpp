struct Node {
	int data;
	Node* next;

	Node (int x) {
		data = x;
		next = NULL;
	}
}


// Insert at the beginning
Node* insertAtBeginning (Node* head, int x) {
	Node* temp = new Node(x);

	temp->next = head;
	return temp;
}


// Insert at the end
Node* insertAtEnd (Node* head, int x) {
	Node* temp = new Node(x);
	Node* curr = head;

	while (curr->next != NULL)
		curr = curr->next;

	curr->next = temp;
	return head;
}