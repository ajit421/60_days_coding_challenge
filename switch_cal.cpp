#include<iostream>
using namespace std;

int main() {
    int num1, num2;
    char exp; 

    cout << "Enter your first number: ";
    cin >> num1;
    cout << "Choose any one expression + - * / %: ";
    cin >> exp;
    cout << "Enter your second number: ";
    cin >> num2;

    switch (exp) {
        case '+':
            cout << "Addition: " << num1 + num2;
            break;
        case '-':
            cout << "Subtraction: " << num1 - num2;
            break;
        case '*':
            cout << "Multiplication: " << num1 * num2;
            break;
        case '/':
            cout << "Division: " << num1 / num2;
            break;
        case '%':
            cout << "Remainder: " << num1 % num2;
            break;
        default:
            cout << "Enter the right option.";
    }

    return 0;
}
