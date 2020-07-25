{
    int size = arr.size();
    int low = 0, mid = 0, high = size - 1;
    while (mid <= high) {
        if (arr[mid] == 0) {
            swap(arr[low], arr[mid]);
            low++; mid++;
        }
        else if (arr[mid] == 2) {
            swap(arr[high], arr[mid]);
            high--;
        }
        else {
            mid++;
        }
    }
}