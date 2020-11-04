#include <bits/stdc++.h>
using namespace std;


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