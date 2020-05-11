/******************************************
* AUTHOR : ARPIT *
* NICK : arpitfalcon *
* INSTITUTION : BIT MESRA *
* Harwork is the key to success. *
******************************************/


bool verify(int a[], int size, int n){  // To verify if candidate is majority.
    int count = 0;
    for(int i=0;i<size;i++){
        if(a[i]==n) count++;
    }
    if(count>size/2) return true;
    return false;
}

int findCandidate(int a[], int size){  // To find the suitable candidate.
    int maj_index = 0, count = 1;
    for(int i=1;i<size;i++){
        if(a[maj_index]==a[i]) count++;
        else count--;

        if(count==0){
            maj_index = i;
            count = 1;
        }
    }
    return a[maj_index];
}
