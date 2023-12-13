#include <iostream>
using namespace std;

int main() {
    int number, revNumber = 0;

    cout << "Enter a number: ";
    cin >> number;

    while (number > 0) {
        int digit = number % 10;
        revNumber = revNumber * 10 + digit;
        number /= 10;
    }

    cout << "Reversed number: " << revNumber << endl;

    return 0;
}
