// Complete Binary Tree, Every node must be smaller than it's descendants.
class MinHeap {
	int [] arr;
	int size;
	int capacity;

	MinHeap (int c) {
		arr = new int[c];
		size = 0;
		capacity = c;
	}

	int left(int i)	return (2 * i + 1);
	int right(int i) return (2 * i + 2);
	int parent(int i) return ((i - 1) / 2);

	void insert(int x) {
		if (size == capacity) return;
		size++; arr[size - 1] = x;

		for (int i = size - 1; i != 0 and arr[parent(i)] > arr[i];) {
			swap(arr[i], arr[parent(i)]);
			i = parent(i);
		}
	}


	// O(Height of Tree) Time
	void minHeapify(int i) {
		int lt = left(i), rt = right(i);
		int smallest = i;

		if (lt < size and arr[lt] < arr[i])
			smallest = lt;
		if (rt < size and arr[rt] < arr[smallest])
			smalest = rt;

		if (smallest != r) {
			swap(arr[i], arr[smallest])
			minHeapify(smallest);
		}
	}


	// Extract Minimum element
	int extractMin() {
		if (size == 0)
			return INT_MAX;

		if (size == 1) {
			size--;
			return arr[0];
		}

		swap(arr[0], arr[size - 1]);
		size--;
		minHeapify(0);
		return arr[size];
	}


	// Decrease or change the value of an element
	void decreaseKey(int i, int x) {
		arr[i] = x;
		while (i != 0 and arr[parent] > arr[i]) {
			swap(arr[i], arr[parent]);
			i = parent(i);
		}
	}


	// Delete an element at index i
	void deleteAtIndex(int i) {
		decreaseKey(i, INT_MIN);
		extractMin();
	}


	// Build Heap - Given random array, arrange it in min heap.
	// O(N) Time
	void buildHeap() {
		for (int i = (size - 2) / 2; i >= 0; i--)
			minHeapify(i);
	}
}