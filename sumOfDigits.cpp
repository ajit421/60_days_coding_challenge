#include <iostream>
using namespace std;

int main() {
    int number, sum = 0;

    cout << "Enter a number: ";
    cin >> number;

    while (number > 0) {
        int digit = number % 10;
        sum =sum + digit;
        number = number / 10;
    }

    cout << "Sum of the digits: " << sum << endl;

    return 0;
}
