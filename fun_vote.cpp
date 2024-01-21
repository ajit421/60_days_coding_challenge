#include<iostream>
using namespace std;

bool checkEligibility(int age) {
    if (age >= 18) {
        cout << "You are eligible to vote." << endl;
        return true;
    } else {
        cout << "You are not eligible to vote yet." << endl;
        return false;
    }
}

int main() {
    int age;

    cout << "Enter your age: ";
    cin >> age;

    checkEligibility(age);

    return 0;
}
