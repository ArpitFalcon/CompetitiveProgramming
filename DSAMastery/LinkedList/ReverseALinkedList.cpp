# include <bits/stdc++.h>
using namespace std;

// Linked List Node
struct Node
{
	int data;
	struct Node* next;
	// Constructor
	Node (int data) {
		this->data = data;
		next = NULL;
	}
};


// Linked List
struct LinkedList {
	Node* head;
	// Constructor to create the Linked List
	LinkedList() {
		head = NULL;
	}


	// Reverse the LL iteratively
	void reverseInterative () {
		// 3 Pointer Approach
		// Center, Next, Previous
		Node* current = head;
		Node* prev = NULL;
		Node* next = NULL;

		while (current != NULL) {
			// Store Next
			next = current->next;

			// Reverse current node's pointer
			current->next = prev;

			// Move pointers one position ahead.
			prev = current;
			current = next;
		}

		head = prev;
	}


	// Reverse the LL recursively
	Node* reverseRecursive(Node* head) {
		if (head == NULL || head->next == NULL)
			return head;

		Node* res = reverseRecursive(head->next);
		head->next->next = head;

		head->next = NULL;

		return res;
	}


	// Print the Linked List
	void print() {
		struct Node* temp = head;
		while (temp != NULL) {
			cout << temp->data << " ";
			temp = temp->data;
		}
	}


	// Push at initial/top position.
	void push(int data) {
		Node* temp = new Node(data);
		temp->next = head;
		head = temp;
	}
};