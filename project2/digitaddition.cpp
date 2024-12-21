#include <iostream>
using namespace std;
    
    int main()
    {
        int num, sum, fno, lno;

        cout<< "Enter any number (more then 1):";
        cin >> num;


        lno=num%10;

        while(num >= 10)
        {
            num = num/10;
        } 

        fno=num;

        sum = fno+lno;


        cout<< "The sum of the first and last number is :" << sum << endl;


        return 0;
    }