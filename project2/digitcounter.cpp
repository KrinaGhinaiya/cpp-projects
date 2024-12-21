#include <iostream>
using namespace std;

int main() {
    int n, count = 0;

    cout << "Enter the numbers: ";
    cin >> n;

    if (n < 0) {
        n = -n; 
    }
    do {
        count++;
        n /= 10;  
    } while (n != 0);

    cout << " The Total number of digits is: " << count << endl;

    return 0;
}