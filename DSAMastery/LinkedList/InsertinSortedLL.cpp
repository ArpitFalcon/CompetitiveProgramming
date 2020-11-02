Node* insertSorted (Node* head, int data) {
	Node* newNode = new Node(data);

	if (head == NULL)
		return head;

	Node* temp = head;

	if (x < head->data) {
		newNode -> next = head;
		return newNode;
	}

	while (temp->next != NULL and temp->next->data < data) {
		temp = temp->next;
	}

	newNode -> next = temp -> next;
	temp -> next = newNode;

	return head;
}