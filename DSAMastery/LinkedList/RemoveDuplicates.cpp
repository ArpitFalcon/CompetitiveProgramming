// Remove duplicates from a Sorted List

Node* removeDup (Node* head) {
	Node* curr = head;

	while (curr != NULL and curr->next != NULL) {
		if (curr->next->data == curr->data) {
			curr->next = curr->next->next;
		} else {
			curr = curr->next;
		}
	}

	return head;
}