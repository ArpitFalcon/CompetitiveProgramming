/******************************************
* AUTHOR : ARPIT *
* NICK : arpitfalcon *
* INSTITUTION : BIT MESRA *
* Harwork is the key to success. *
******************************************/

void possibleSubsets(int A[], ll N){
    for (int i = 0; i < (1 << n); i++) {
        for (int j = 0; j < n; j++) {
            if (i & (1 << j)) {
                // A[j] is an element of a subset.
            }
        }
    }
}


// Review this code once 
// Recursion for generating subsets.

vector<int> sub;
void search( int k) {
    if (k == n) {
        // process subset
    }
    else {
        search(k + 1);
        sub.push_back(k);
        search(k + 1);
        sub.pop_back();
    }
}

