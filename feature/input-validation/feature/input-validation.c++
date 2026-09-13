#include <iostream>
using namespace std;

int main() {
    double num1, num2;
    char op;

    cout << "Enter first number: ";
    cin >> num1;

    if (cin.fail()) {
        cout << "Invalid input";
        return 0;
    }

    cout << "Enter operator (+, -, *, /): ";
    cin >> op;

    cout << "Enter second number: ";
    cin >> num2;

    if (cin.fail()) {
        cout << "Invalid input";
        return 0;
    }

    if (op == '+')
        cout << "Result: " << num1 + num2;
    else if (op == '-')
        cout << "Result: " << num1 - num2;
    else if (op == '*')
        cout << "Result: " << num1 * num2;
    else if (op == '/')
        cout << "Result: " << num1 / num2;
    else
        cout << "Invalid operator";
}