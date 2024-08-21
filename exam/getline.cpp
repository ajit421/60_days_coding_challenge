#include <iostream>
#include <string>

using namespace std;

int main() {
    string userName, email, password;

    cout << "\nEnter Your User Name: ";
    getline(cin, userName);

    cout << "Enter Your Email Address: ";
    getline(cin, email);

    cout << "Enter Your Password: ";
    getline(cin, password);

    cout << "\nYour details are:\n";
    cout << "User Name: " << userName << "\n";
    cout << "Email Address: " << email << "\n";
    cout << "Password: " << password << "\n";

    return 0;
}
