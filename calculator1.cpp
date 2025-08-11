#include <iostream>
#include <cmath>  // For pow() and sqrt()
using namespace std;

int main() {
    double num1, num2;
    char op;

    cout << "Enter first number: ";
    cin >> num1;

    cout << "Enter operator (+, -, *, /, ^ for power, s for square root): ";
    cin >> op;

    if (op == 's') {  // Square root operation
        if (num1 >= 0)
            cout << "Result: " << sqrt(num1) << endl;
        else
            cout << "Error: Square root of negative number is not real!" << endl;
    }
    else {
        cout << "Enter second number: ";
        cin >> num2;

        switch (op) {
            case '+':
                cout << "Result: " << num1 + num2 << endl;
                break;
            case '-':
                cout << "Result: " << num1 - num2 << endl;
                break;
            case '*':
                cout << "Result: " << num1 * num2 << endl;
                break;
            case '/':
                if (num2 != 0)
                    cout << "Result: " << num1 / num2 << endl;
                else
                    cout << "Error: Division by zero!" << endl;
                break;
            case '^':
                cout << "Result: " << pow(num1, num2) << endl;
                break;
            default:
                cout << "Invalid operator!" << endl;
        }
    }

    return 0;
}