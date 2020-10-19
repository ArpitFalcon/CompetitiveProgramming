#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> data(n);

    for (int i = 0; i < n; i++)
        cin >> data[i];

    int low = 0, high = n - 1;
    while (low <= high) {
        if (data[low] < 0)
            low++;
        else {
            swap(data[low], data[high]);
            high--;
        }
    }

    for (auto num : data)
        cout << num << " ";

    return 0;
}