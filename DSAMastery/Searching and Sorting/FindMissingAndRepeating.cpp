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