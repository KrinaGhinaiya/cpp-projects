#include <iostream>
using namespace std;

int main() {
    char letter = 'a'; 

    cout << "Alphabets from 'a' to 'z' skipping 3 alphabets:" << endl;

    do {
        cout << letter << " ";
        letter += 4; 
    } while (letter <= 'z');

    cout << endl;
    return 0;
}
