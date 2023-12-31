#include<iostream>
using namespace std;

int main() {
    int number, factorial = 1;

    cout << "Enter a number: ";
    cin >> number;

    if (number < 0) {
        cout << "Can't find the factorial for negative number";
    }
    else if (number <= 1) {
        cout << number << "!=" << factorial;
    }
    else {
        for (int i = 2; i <= number; i++) {
            factorial *= i;
        }
        cout << number << "!=" << factorial;
    }

    return 0;
}
