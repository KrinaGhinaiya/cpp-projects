// Q.1 Negative Elements in 1D Array
// Develop a program that finds all the negative elements from a given 1D array.

#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter the array's size: ";
    cin >> n;

    int arr[n];
    cout << "Enter array's elements: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    cout << "Negative elements from an Array: ";
    for (int i = 0; i < n; i++) {
        if (arr[i] < 0) {
            cout << arr[i] << " ";
        }
    }
    return 0;
}
