// Q.3 Develop a program that prints the given Inverted Left half triangle pattern using a nested for
// loop.
// 1 0 1 0 1
// 1 0 1 0
// 1 0 1
// 1 0
// 1

#include <iostream>
using namespace std;

int main()
{
    int rows = 5; 

    for (int i = 5; i >= 1; i--)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << (j % 2) << " "; 
        }
        cout << endl;
    }

    return 0;
}
