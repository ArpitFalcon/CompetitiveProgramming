#include <bits/stdc++.h>
using namespace std;

class kStacks {
	int *arr; // Array of size n to store actual content
	int *top; // Array of size k to store indexes of top elements
	int *next;// Array of size n to store next entry in all stacks.

	int n, k;
	int free; // Free list

public:
	// Constructor to create k stacks
	kStacks(int k, int n);

	// To check space
	bool isFull() { return (free == -1); }

	// To push an item in stack number 'sn'
	void push(int item, int sn);

	// To pop an item from stack number 'sn'
	int pop(int sn);

	// To check if empty for stack number 'sn'
	bool isEmpty(int sn) { return (top[sn] == -1); }
};

kStacks::kStacks(int k1, int n1) {
	k = k1, n = n1;
	arr = new int[n];
	top = new int[k];
	next = new int[n];

	// Initialize all stacks as empty
	for (int i = 0; i < k; i++)
		top[i] = -1;

	// Initialize all spaces as free
	free = 0;
	for (int i = 0; i < n; i++)
		next[i] = i + 1;
	next[n - 1] = -1; // -1 represents end of free list.
}

// To push an element in stack number 'sn'
void kStacks::push(int item, int sn) {
	if (isFull())
		return;

	int i = free; // Store index of first free slot

	// Update index of next free slot
	free = next[i];

	next[i] = top[sn];
	top[sn] = i;

	arr[i] = item;
}


// To pop an item from stack number 'sn'
int kStacks::pop(int sn) {
	if (isEmpty(sn))
		return INT_MAX;

	// Index of the top element of stack 'sn'
	int i = top[sn];

	// Change top to store the next of previous top
	top[sn] = next[i];

	// Attach the previous to the beginning.
	next[i] = free;
	free = i;

	// Return the previous top item
	return arr[i];
}
