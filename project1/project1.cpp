#include <iostream>
using namespace std;

int main()
{
    int marks;
    char grade;

    cout << "Enter the marks: ";
    cin >> marks;

    grade = (marks >= 90)   ? 'A'
            : (marks >= 80) ? 'B'
            : (marks >= 70) ? 'C'
            : (marks >= 60) ? 'D'
                            : 'F';

    cout << "Your grade is " << grade << ": ";

    switch (grade)
    {
    case 'A':
        cout << "Excellent work!";
        break;
    case 'B':
        cout << "Well done.";
        break;
    case 'C':
        cout << "Good job.";
        break;
    case 'D':
        cout << "You passed, but you could do better.";
        break;
    case 'F':
        cout << "Sorry, you failed.";
        break;
    }

    cout << endl;
    if (grade == 'A' || grade == 'B' || grade == 'C' || grade == 'D')
    {
        cout << "Congratulations! You are eligible for the next level." << endl;
    }
    else     {
        cout << "Please try again next time." << endl;
    }

    return 0;
}
