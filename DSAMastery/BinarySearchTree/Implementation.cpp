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