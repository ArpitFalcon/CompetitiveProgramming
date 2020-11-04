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


// Insert at the end - O(1) without tail pointer
Node* insertEnd(Node *head, int x) {
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

	return temp;
}


// Delete the head node of the CLL
Node* deleteHead(Node* head) {
	if (head == NULL || head->next == NULL)
		return NULL;

	// Delete the second node and copy it's value in head.
	head->data = head->next->data;
	head->next = head->next->next;

	return head;
}


// Delete the kth node from the CLL
Node* deleteKthNode(Node* head, int k) {

	if (head == NULL)
		return head;

	if (k == 1)
		return deleteHead(head);

	Node* curr = head;
	for (int i = 0; i < k - 2; i++)
		curr = curr->next;

	curr->next = curr->next->next;
}