// Q.7 Develop a program that prints the hollow triangle pattern using a nested for loop.
//      *
//     * *
//    *   *
//   *     *
//  * * * * *

#include <iostream>
using namespace std;

int main() {
    int rows = 5;

    for (int i = 1; i <= rows; i++) {
        
        for (int j = 1; j <= rows - i; j++) {
            cout << " ";
        }
        
        for (int k = 1; k <= (2 * i - 1); k++) {
            
            if (k == 1 || k == (2 * i - 1) || i == rows) {
                cout << "*";
            } else {
                cout << " ";
            }
        }
       
        cout << endl;
    }

    return 0;
}


