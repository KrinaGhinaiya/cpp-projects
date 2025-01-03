// Q.2 Largest Element in 2D Array
// Develop a Program to find the largest element from a given 2D array

#include <iostream>
using namespace std;

int main() {
    int rows, cols;

    cout << "Enter the array's row size: ";
    cin >> rows;
    cout << "Enter the array's column size:";
    cin >> cols;

    int arr[rows][cols];

    cout << "Enter array's elements:\n";
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cin >> arr[i][j];
        }
    }

    // Find the largest element
    int largest = arr[0][0];
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            if (arr[i][j] > largest) {
                largest = arr[i][j];
            }
        }
    }

    cout << "The largest element from the 2D array is: " << largest << endl;

    return 0;
}
