#include <iostream>
using namespace std;

int main() {
    int n = 5;

    // Upper Half
    for (int i = 1; i <= n; i++) {
        // Print spaces
        for (int j = 1; j <= n - i; j++)
            cout << " ";

        // Print characters
        for (int k = 1; k <= 2 * i - 1; k++)
            cout << (char)('A' + k - 1);

        cout << endl;
    }

    // Lower Half
    for (int i = n - 1; i >= 1; i--) {
        // Print spaces
        for (int j = 1; j <= n - i; j++)
            cout << " ";

        // Print characters
        for (int k = 1; k <= 2 * i - 1; k++)
            cout << (char)('A' + k - 1);

        cout << endl;
    }

    return 0;
}
