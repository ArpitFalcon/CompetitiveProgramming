// We use Double hashing by using 2 hashing functions.
// The second hashing function should be relatively prime to 'm' // 'm' is the size of hash table.
// the formule is - hash (key) = ( h1(key) + i * h2(key) ) % m, here h1 is first hash function, h2 is second
// and i is the number of collision in that particular key.
// You'll get a empty space if there is one, there will be clustering.


// Algorithm
// void doubleHashingInsert(key) {
// 	if (table is full)
// 		return error;

// 	probe = h1(key), offset = h2(key);

// 	while (table[probe] is occupied)
// 		probe = (probe + offset) % m;

// 	table[probe] = key;
// }


// Implementation of Open Addressing
// Linear Probbing
struct MyHash {
	int *arr;
	int size;
	int cap;


	MyHash(int c) {
		cap = c;
		size = 0;
		for (int i = 0; i < cap; i++)
			arr[i] = -1;
	}


	int hash(int key) {
		return key % cap;
	}


	bool search(int key) {
		int h = hash(key);
		int i = h;

		while (arr[i] != -1) {
			if (arr[i] == key)
				return true;
			i = (i + 1) % cap;
			if (i == h)
				return false;
		}

		return false;
	}


	bool insert(int key) {
		if (size == cap)
			return false;

		int i = hash(key);

		while (arr[i] != -1 and arr[i] != -2 and arr[i] != key)
			i = (i + 1) % cap;

		if (arr[i] == key)
			return false;
		else {
			arr[i] = key;
			size++;
			return true;
		}
	}


	bool erase (int key)_{
		if (size == 0)
			return false;

		int i = hash(key);

		while (arr[i] != -1) {
			if (arr[i] == key) {
				arr[i] = -2;
				return true;
			}

			i = (i + 1) % cap;
			if (i == h)
				return false;
		}
		return false;
	}
}