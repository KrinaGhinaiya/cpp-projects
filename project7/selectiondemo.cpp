#include <iostream>
#include <vector>
#include <algorithm> // for std::swap

using namespace std;

void selectionSort(vector<int>& arr) {
    int n = arr.size();
    // One by one move the boundary of the unsorted subarray
    for (int i = 0; i < n - 1; i++) {
        // Find the minimum element in unsorted array
        int minIndex = i;
        for (int j = i + 1; j < n; j++) {
            if (arr[j] < arr[minIndex]) {
                minIndex = j;
            }
        }
        // Swap the found minimum element with the first element of the unsorted part
        swap(arr[i], arr[minIndex]);
    }
}

int main() {
    vector<int> arr = {64, 2, 12, 22, 11,12};

    cout << "Original array: ";
    for (int num : arr) {     
        cout << num << " ";
    }
    cout << "\n";

    selectionSort(arr);

    cout << "Sorted array:   ";
    for (int num : arr) {
        cout << num << " ";
    }
    cout << "\n";

    return 0;
}
