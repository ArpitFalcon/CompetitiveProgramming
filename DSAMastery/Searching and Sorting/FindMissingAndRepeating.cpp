
// Count Sort
// O(N) Time | O(N) Space
vector<int> findTwoElement(int *arr, int n) {
    vector<int> countSort(n + 5, 0);

    for (int i = 0; i < n; i++)
        countSort[arr[i]]++;

    int b = 0, a = 0;
    for (int i = 0; i <= n; i++) {
        if (countSort[i] > 1)
            b = i;
        if (countSort[i] == 0)
            a = i;
    }

    return {b, a};
}


// Marking the indexes in the array
// O(N) Time | O(1) Space
vector<int> findTwoElement(int *arr, int n) {
    // b - Repeating Element
    // a - Missing Element
    int b, a;

    // Repeating Element
    for (int i = 0; i < n; i++)
        if (arr[abs(arr[i]) - 1] > 0)
            arr[abs(arr[i]) - 1] = -arr[abs(arr[i]) - 1];

        else
            b = abs(arr[i]);

    // Missing Element
    for (int i = 0; i < n; i++)
        if (arr[i] > 0)
            a = i + 1;

    return {b, a};
}

