struct Node {
	int data;
	Node* next;

	Node(int x) {
		data = x;
		next = NULL;
	}
};

int searchSinglyLL(Node *head, int val) {
	Node curr = head;
	int res = 1;
	while (curr != NULL) {
		if (curr -> data == val)
			return res;

		curr = curr->next;
		res++;
	}

	return -1;
}


int searchSinglyLL(Node* head, int val) {
	if (head == NULL)
		return -1;

	if (head->data == val)
		return 1;
	else {
		int res = searchSinglyLL(head->next, val);
		if (res == -1)
			return -1;
		else
			return res + 1;
	}
}