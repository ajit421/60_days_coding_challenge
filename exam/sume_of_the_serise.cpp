#include<iostream>
using namespace std;

int main() {
    int n, sum = 0;

    cout << "Enter a value of n: ";
    cin >> n;

    if (n % 2 == 0) {
        n = n - 1;
    }

    for(int i = 1; i <= n; i += 2) {
        sum += i;
    }

    cout << "Sum of the series 1 + 3 + 5 + ... + " << n << " is: " << sum << endl;

    return 0;
}
