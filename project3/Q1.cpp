// Q.1 Develop a program that prints the given Right half triangle pattern using a nested for loop. 
// 41
// 41 42
// 41 42 43
// 41 42 43 44
// 41 42 43 44 45

#include <iostream>
using namespace std;

int main() {
    int rows = 5;  
    int n = 41;  

    for (int i = 1; i <= 5; i++) {
        
        for (int j = 0; j < i; j++) 
        {
            cout << n + j << " ";  
        }
        cout << endl;  
    }

    return 0;
}



