// Q.5 Develop a program that prints the given Custom numeric pattern using a nested for loop.
// 5
// 4 5
// 3 4 5
// 2 3 4 5
// 1 2 3 4 5

#include <iostream>
using namespace std;

int main() {
    int rows = 5;  

    for (int i = 5; i >= 1; i--) {
       
        for (int j = i; j <= 5; j++) {
            cout << j << " ";
        }
        cout << endl;  
    }

    return 0;
}
