#include <iostream>
using namespace std;

int main() {
    char op;

    cout << "Enter an alphabet: " << endl;
    cin >> op;

    switch (op) {
        case 'a': case 'e': case 'i': case 'o': case 'u':
        case 'A': case 'E': case 'I': case 'O': case 'U':
            cout << "Your character is a vowel";
            break;

        default:
        
            cout << "Your character is a consonant";
            break;
    }

    return 0;
}
