/******************************************
* AUTHOR : ARPIT *
* NICK : arpitfalcon *
* INSTITUTION : BIT MESRA *
******************************************/

bool find3Numbers(int A[], int arr_size, int sum)
{
    int l, r;
    sort(A, A + arr_size);
    for (int i = 0; i < arr_size - 2; i++) {
        // Now inside this loop we can treat it as 2SUM Problem.
        l = i + 1; 
        r = arr_size - 1; 
        
        while (l < r) {
            if (A[i] + A[l] + A[r] == sum) {
                printf("Triplet is %d, %d, %d", A[i],
                       A[l], A[r]);
                return true;
            }
            else if (A[i] + A[l] + A[r] < sum)
                l++;
            else 
                r--;
        }
    }
    return false;
}

