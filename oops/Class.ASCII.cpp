#include <iostream>
using namespace std;

class A {
    char ch;

public:
    void input() {
        cout << "Enter any character: ";
        cin >> ch;
    }

    void output() {
        cout << "ASCII value of '" << ch << "' is " <<(int)ch << endl;
    }
};

int main() {
    A obj;
    obj.input();
    obj.output();

    return 0;
}
