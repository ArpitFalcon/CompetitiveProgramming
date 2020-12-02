class Solution {
public:
	static int nextGap(int gap) {
		if (gap <= 1) return 0;
		return (gap / 2) + (gap % 2);
	}

	void merge(int arr1[], int arr2[], int n, int m) {
		int size = n + m;
		int gap = n + m;

		for (gap = nextGap(gap); gap > 0; gap = nextGap(gap)) {

			for (int i = 0; i < size - gap; i++) {
				int swap1 = i, swap2 = i + gap;
				if (swap1 >= n) {
					swap1 = swap1 - n;
					swap2 = swap2 - n;

					if (arr2[swap1] > arr2[swap2])
						swap(arr2[swap1], arr2[swap2]);
				}
				else if (swap1 < n and swap2 >= n) {
					swap2 = swap2 - n;
					if (arr1[swap1] > arr2[swap2])
						swap(arr1[swap1], arr2[swap2]);
				}
				else if (arr1[swap1] > arr1[swap2])
					swap(arr1[swap1], arr1[swap2]);
			}
		}
	}
};