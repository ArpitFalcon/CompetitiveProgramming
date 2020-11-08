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
