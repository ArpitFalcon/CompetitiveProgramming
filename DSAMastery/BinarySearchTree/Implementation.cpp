#include <bits/stdc++.h>
using namespace std;


struct Node {
	int key;
	Node* left;
	Node* right;

	Node(int val) {
		key = val;
		left = NULL;
		right = NULL;
	}
}


// O(h) Time height of the tree | O(h) for function call stack
bool searchRecursive(Node* root, int x) {
	if (root == NULL)
		return false;

	if (root->key > x)
		searchRecursive(root->left, x);
	else if (root->key < x)
		searchRecursive(root->right, x);
	else if (root->key == x)
		return true;
}


// O(h) Time height of the tree | O(1)
bool searchIterative(Node *root, int x) {
	while (root != NULL) {
		if (root->key == x)
			return true;
		else if (root->key < x)
			root = root->right;
		else
			root = root->left;
	}

	return false;
}


// O(h) Time | O(h) Space
Node* insertRecursive(Node *root, int x) {
	if (root == NULL)
		return new Node(x);
	else if (root->key > x)
		root->left = insertRecursive(root->left, x);
	else if (root->key < x)
		root->right = insertRecursive(root->right, x);

	return root;
}


// O(h) Time | O(1) Space
Node* insertIterative(Node *root, int x) {
	if (root == NULL)
		return new Node(x);

	Node *temp = root;
	Node *newNode = new Node(x);
	Node *parent = NULL;

	while (temp != NULL) {
		parent = temp;
		if (temp->key > x)
			temp = temp->left;
		else if (temp->key < x)
			temp = temp->right;
		else
			return root;
	}

	if (parent->key > x)
		parent->left = temp;
	else
		parent->right = temp;

	return root;
}


// Helper function to get successor for delete
Node *getSuccessor(Node *curr) {
	curr = curr->right;
	while (curr != NULL and curr->left != NULL)
		curr = curr->left;

	return curr;
}


// Delete Operation
Node *delNode(Node* root, int x) {
	if (root == NULL) return root;

	if (root->key > x)
		root->left = delNode(root->left, x);
	else if (root->key < x)
		root->right = delNode(root->right, x);
	// If we found the node to be deleted
	else {
		// If left node is not present
		if (root->left == NULL) {
			Node *temp = root->right;
			delete(root);
			return temp;
		}
		// If right node is not present
		else if (root->right == NULL) {
			Node *temp = root->left;
			delete(root);
			return temp;
		}
		// If both the nodes are present
		else {
			// Find the leftmost right value.
			Node *succ = getSuccessor(root);
			root->key = succ->key;
			root->right = delNode(root->right, succ->key);
		}
	}

	return root;
}