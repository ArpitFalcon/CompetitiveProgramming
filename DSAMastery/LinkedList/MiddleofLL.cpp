int middleElement (Node *head) {
	Node* temp = head;
	Node* mid = head;

	while (temp != NULL and temp->next != NULL) {
		temp = temp->next->next;
		mid = mid->next;
	}

	return mid->data;
}