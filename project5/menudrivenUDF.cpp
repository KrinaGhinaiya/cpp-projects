// Q.1 Calculator
// Develop a menu-driven program to implement arithmetic operations such as +, -, *, /, and %
// using UDF, switch case, and looping. Make sure that the program is endless until a certain letter
// is pressed.

#include <iostream>
using namespace std;

float add(float a, float b);
float subtract(float a, float b);
float multiply(float a, float b);
float divide(float a, float b);
int modulos(int a, int b);

int main()
{
    int choice;
    float num1, num2;

    while (true)
    {
        cout << "Menu:" << endl;
        cout << "Press 1 for +" << endl;
        cout << "Press 2 for -" << endl;
        cout << "Press 3 for *" << endl;
        cout << "Press 4 for /" << endl;
        cout << "Press 5 for %" << endl;
        cout << "Press 0 for the exit" << endl;
        cout << "Enter your choice: ";
        cin >> choice;

        if (choice == 0)
        {
            cout << "Exiting the program." << endl;
            break;
        }

        cout << "Enter first number: ";
        cin >> num1;
        cout << "Enter second number: ";
        cin >> num2;

        switch (choice)
        {
        case 1:
            cout << "Addition of given number is: " << add(num1, num2) << endl;
            break;

        case 2:
            cout << "subtraction of given number is: " << subtract(num1, num2) << endl;
            break;
        case 3:
            cout << "multiplication of given number is: " << multiply(num1, num2) << endl;
            break;
        case 4:
            if (num2 != 0)
            {
                cout << "division of given number is: " << divide(num1, num2) << endl;
            }
            else
            {
                cout << "Error: Division by zero!" << endl;
            }
            break;
        case 5:

            cout << "modulus of given number is: " << modulos(num1, num2) << endl;
            break;

        default:
            cout << "Invalid choice! Please try again." << endl;
        }
    }

    return 0;
}

float add(float a, float b)
{
    return a + b;
}

float subtract(float a, float b)
{
    return a - b;
}

float multiply(float a, float b)
{
    return a * b;
}

float divide(float a, float b)
{
    return a / b;
}

int modulos(int a, int b)
{
    return a % b;
}