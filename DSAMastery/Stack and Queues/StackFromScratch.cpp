#include <bits/stdc++.h>
using namespace std;

class MyStack {

private:
	vector<int> stackArray;
	int top;
	int size;

public:
	MyStack() {
		top = -1;
		size = 0;
	}

	void push(int num) {
		stackArray.push_back(num);
		top++; size++;
	}

	int pop() {
		if (size == 0)
			return -1;

		top--; size--;
		return stackArray[size];
	}

	int getSize() {
		return size;
	}

	int getTop() {
		return stackArray[top];
	}

	bool isEmpty() {
		if (size == 0)
			return true;
		else
			return false;
	}
};


int main() {
	// Initialize the class
	MyStack stk;

	// Push
	stk.push(10);
	stk.push(20);
	stk.push(30);

	// Checking other functions
	cout << stk.getTop() << endl;
	stk.pop();
	cout << stk.getTop() << endl;
	cout << stk.getSize() << endl;
}