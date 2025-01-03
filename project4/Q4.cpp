// Q.4 Sum of Elements in Row & Column of 2D Array
// Develop a Program to print and find the sum of all elements of a given row & column from a 2D array.


#include <iostream>
using namespace std;

int main() {
    int rows, cols;

    cout << "Enter the row size: ";
    cin >> rows;
    cout << "Enter the column size: ";
    cin >> cols;

    int arr[rows][cols];

    cout << "Enter array's elements:\n";
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cout << "a[" << i << "][" << j << "] = ";
            cin >> arr[i][j];
        }
    }

    int rowN;
    cout << "Enter row number: ";
    cin >> rowN;

    int rowSum = 0;
    cout << "Elements of row " << rowN << ": ";
    for (int j = 0; j < cols; j++) {
        cout << arr[rowN][j];
        if (j < cols - 1) cout << ", ";
        rowSum += arr[rowN][j];
    }
    cout << endl << "The sum of row " << rowN << ": " << rowSum << endl;

    int colN;
    cout << "Enter column number: ";
    cin >> colN;

    int colSum = 0;
    cout << "Elements of column " << colN << ": ";
    for (int i = 0; i < rows; i++) {
        cout << arr[i][colN];
        if (i < rows - 1) cout << ", ";
        colSum += arr[i][colN];
    }
    cout << endl << "The sum of column " << colN << ": " << colSum << endl;

    return 0;
}
