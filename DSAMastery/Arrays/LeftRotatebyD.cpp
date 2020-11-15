// O(n * d) Time | O(1) Space
void leftRotateOne(int arr[], int n) {
	int temp = arr[0];
	for (int i = 0; i < n; i++)
		arr[i - 1] = arr[i];
	arr[n - 1] = temp;
}

void leftRotate(int arr[], int n, int d) {
	for (int i = 0; i < d; i++)
		leftRotateOne(arr, n);
}


// O(n) Time | O(d) Space
void leftRotate(int arr[], int n, int d) {
	int temp[d];
	for (int i = 0; i < d; i++)
		temp[i] = arr[i];

	for (int i = d; i < n; i++)
		arr[i - d] = arr[i];

	for (int i = 0; i < d; i++)
		arr[n - d + i] = temp[i];
}


// O(n) Time | O(1) Space
void leftRotate(int arr[], int n, int d) {
	reverse(arr, 0, d - 1);
	reverse(arr, d, n - 1);
	reverse(arr, 0, n - 1);
}


void reverse(int arr[], int low, int high) {
	while (low < high) {
		swap(arr[low], arr[high]);
		low++;
		high--;
	}
}