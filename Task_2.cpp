
/////////////////////////////////       SIMPLE CALCULATOR       /////////////////////////////////


#include <iostream>
using namespace std;

int main() {
    char operation;
    float num1, num2;

    cout << "Welcome to Simple Calculator" << endl;
    cout << "Enter two numbers: ";
    cin >> num1 >> num2;

    cout << "Chose an operation (+, -, *, /): ";
    cin >> operation;

    switch(operation) {
        case '+':
            cout << num1 << " + " << num2 << " = " << num1 + num2;
            break;
        case '-':
            cout << num1 << " - " << num2 << " = " << num1 - num2;
            break;
        case '*':
            cout << num1 << " * " << num2 << " = " << num1 * num2;
            break;
        case '/':
            if(num2 != 0)
                cout << num1 << " / " << num2 << " = " << num1 / num2;
            else
                cout << "Error! Division by zero is not allowed.";
            break;
        default:
            cout << "Error! The operator is not correct";
            break;
    }

    return 0;
}
