struct MyHash {
	int BUCKET;
	list<int> *table;

	MyHash(int b) {
		BUCKET = b;
		table = new list<int> [BUCKET];
	}

	void insertKey(int key) {
		int i = hash(key);
		table[i].push_back(key);
	}

	void deleteKey(int key) {
		int i = hash(key);
		table[i].remove(key);
	}

	bool searchKey(int key) {
		int i = hash(key);
		for (auto x : table[i])
			if (x == key)
				return true;

		return false;
	}

	int hash(int key) {
		return key % BUCKET;
	}
}