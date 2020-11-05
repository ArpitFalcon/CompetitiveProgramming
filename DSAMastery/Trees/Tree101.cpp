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


// Depth First = Inorder, Preorder, Postorder
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