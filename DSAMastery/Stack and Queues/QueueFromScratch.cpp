#include <bits/stdc++.h>
using namespace std;

class MyQueue {
private:
	vector<int> queueArray;
	int front;
	int rear;
	int size;

public:
	MyQueue() {
		front = 0;
		rear = 0;
		size = 0;
	}

	void push(int x) {
		queueArray.push_back(x);
		rear++; size++;
	}

	int pop() {
		if (front >= rear)
			return -1;

		front++; size--;
		return queueArray[front - 1];
	}

	int getSize() {
		return size;
	}

	int getFront() {
		return queueArray[front];
	}

	int getRear() {
		return queueArray[rear - 1];
	}
}