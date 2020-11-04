#include <bits/stdc++.h>
using namespace std;

// Node
struct Node {
	int data;
	Node* next;

	Node (int x) {
		data = x;
		next = NULL;
	}
}



void printLL1 (Node* head) {
	if (head == NULL) return;

	cout << head->data << " ";
	for (Node *p = head->next; p != head; p = p->next)
		cout << p->data << " ";
}

void printLL2 (Node* head) {
	if (head == NULL) return;
	Node* temp = head;

	do {
		cout << temp->data << " ";
		temp = temp->next;
	} while (temp != head);
}


// Insert at the beginning in O(1) with no tail pointer
Node* insertBegin(Node *head, int x) {
	Node *temp = new Node(x);
	if (head == NULL) {
		temp->next = temp;
		return temp;
	}

	// Insert at 2nd position
	temp->next = head->next;
	head->next = temp;

	// Swap data
	int temp_data = head->data;
	head->data = temp->data;
	temp->data = temp_data;

	return head;
}