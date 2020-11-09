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


bool search(Node* root, int x) {
	if (root == NULL)
		return false;

	if (root->key > x)
		search(root->left, x);
	else if (root->key < x)
		search(root->right, x);
	else if (root->key == x)
		return true;
}


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