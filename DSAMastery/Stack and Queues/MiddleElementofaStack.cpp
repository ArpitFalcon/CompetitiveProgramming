#include <bits/stdc++.h>
using namespace std;


// A doubly linked list.
class DLLNode {
public:
	DLLNode *prev;
	int data;
	DLLNode *next;
};

/* Representation of the stack data structure
that supports findMiddle() in O(1) time.
The Stack is implemented using Doubly Linked List.
It maintains pointer to head node, pointer to
middle node and count of nodes */
class MyStack {
public:
	int count;
	DLLNode *mid;
	DLLNode *head;
}


// Function to create the stack
MyStack *createMyStack() {
	MyStack *ms = new MyStack();
	ms -> count = 0;
	return ms;
};


void push(MyStack *ms, int new_data) {

	// New Node to allocate data
	DLLNode *new_DLL = new DLLNode();
	new_DLL->data = new_data;

	// Adding to the beginning of the LL
	new_DLL->prev = NULL;
	new_DLL->next = ms->head;

	// Increment count
	ms-> count += 1;

	// If first element of the stack.
	if (ms->count == 1)
		ms->mid = new_DLL;

	else {
		ms->head->prev = new_DLL;

		// Update mid if ms->count is even.
		if (!(ms->count & 1))
			ms->mid = ms->mid->prev;
	}

	ms->head = new_DLL;
}


int pop(MyStack *ms) {
	if (ms->count == 0)
		return -1;

	DLLNode *head = ms->head;
	int item = head->data;
	ms->head = head->next;

	// If LL is not empty
	if (ms->head != NULL)
		ms->head->prev = NULL;

	ms->count -= 1;

	// Update mid when we have odd number of elements
	if ((ms->count) & 1)
		ms->mid = ms->mid->next;

	free(head);
	return item;
}


// Function to find the middle element
int findMiddle(MyStack *ms) {
	// Edge
	if (ms->count == 0)
		return 1;

	return ms->mid->data;
}


// Function to delete the mid
int deleteMid(MyStack *ms) {
	DLLNode *mid_prev = ms->mid->prev;
	DLLNode *mid_next = ms->mid->next;

	if (mid_next)
		mid_next->prev = mid_prev;
	if (mid_prev)
		mid_prev->next = mid_next;

	int item = ms->mid->data;
	ms->mid->next = NULL;
	ms->mid->prev = NULL;

	ms->count--;

	if (ms->count & 1)
		ms->mid = mid_next;
	else
		ms->mid = mid_prev;

	return item;
}