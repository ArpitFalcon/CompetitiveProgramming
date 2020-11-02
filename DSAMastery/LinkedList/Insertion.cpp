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

	if (head == NULL)
		return temp;

	while (curr->next != NULL)
		curr = curr->next;

	curr->next = temp;
	return head;
}


// Insert at a given position
Node* insertPos(Node* head, int pos, int data) {
	if (pos == 1)
		return insertAtBeginning(head, data);

	int curr = 1;
	Node* temp = head;
	Node* newNode = new Node(data);

	while (temp->next != NULL and curr != pos - 1) {
		temp = temp->next; curr++;
	}

	if (curr == pos) {
		newNode -> next = temp -> next;
		temp -> next = newNode;
	} else
		return head;
}