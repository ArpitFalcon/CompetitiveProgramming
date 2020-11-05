#include <bits/stdc++.h>
using namespace std;

struct Node {
	int key;
	Node *left;
	Node *right;

	Node (int k) {
		key = k;
		left = right = NULL;
	}
}


// Depth First Traversal = Inorder, Preorder, Postorder
void inorderTraversal(Node *root) {
	if (root != NULL) {
		inorderTraversal(root->left);
		cout << root->key << " ";
		inorderTraversal(root->right);
	}
}

void preorderTraversal(Node *root) {
	if (root != NULL) {
		cout << root->key << " ";
		preorderTraversal(root->left);
		preorderTraversal(root->right);
	}
}

void postorderTraversal(Node *root) {
	if (root != NULL) {
		postorderTraversal(root->left);
		postorderTraversal(root->right);
		cout << root->key << " ";
	}
}


// Size of a given Binary Tree
int sizeOfTree(Node *root) {
	if (root == NULL)
		return 0;

	return 1 + sizeOfTree(root->left) + sizeOfTree(root->right);
}


// Maximum in a Binary Tree
int maxOfTree(Node *root) {
	if (root == NULL)
		return INT_MIN;

	return max(root->key, max(maxOfTree(root->left), maxOfTree(root->right)));
}