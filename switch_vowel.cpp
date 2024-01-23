#include<iostream>
using namespace std;

int main() {
    char ch;

    cout << "Enter a character: ";
    cin >> ch;

    switch (ch) {
        case 'a':   case 'e':   case 'i':   case 'o':   case 'u':
        case 'A':   case 'E':   case 'I':   case 'O':   case 'U':

            cout << "The entered character " << ch << " is a vowel.";
            break;
        default:
            cout << "The entered character " << ch << " is Consonant.";
    }

    return 0;
}
