#include <iostream>
#include <limits>
using namespace std;

int main()
{
    double firstNumber, secondNumber;
    char operation;
    char again = 'y';

    while (again == 'y' || again == 'Y')
    {
        cout << "Enter first number: ";
        while (!(cin >> firstNumber))
        {
            cout << "Invalid input. Enter a number: ";
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
        }

        cout << "Enter operator (+, -, *, /): ";
        cin >> operation;

        cout << "Enter second number: ";
        while (!(cin >> secondNumber))
        {
            cout << "Invalid input. Enter a number: ";
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
        }

        switch (operation)
        {
        case '+':
            cout << "Result: " << firstNumber + secondNumber << endl;
            break;

        case '-':
            cout << "Result: " << firstNumber - secondNumber << endl;
            break;

        case '*':
            cout << "Result: " << firstNumber * secondNumber << endl;
            break;

        case '/':
            if (secondNumber == 0)
                cout << "Cannot divide by zero." << endl;
            else
                cout << "Result: " << firstNumber / secondNumber << endl;
            break;

        default:
            cout << "Invalid operator." << endl;
        }

        cout << "Do you want another calculation? (y/n): ";
        cin >> again;

        while (again != 'y' && again != 'Y' &&
               again != 'n' && again != 'N')
        {
            cout << "Please enter y or n: ";
            cin >> again;
        }

        cout << endl;
    }

    cout << "Calculator closed." << endl;
    return 0;
}
