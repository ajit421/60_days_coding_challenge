#include <iostream>
using namespace std;

class add {
    int num1, num2, c;

public:
    void input() {
        cout << "Enter values: ";
        cin >> num1 >> num2;
    }

    void sum() {
        c = num1 + num2;
    }

    void show() {
        cout << c << endl;
    }
};

int main() {
    add ob;
    ob.input();
    ob.sum();
    ob.show();
    return 0;
}
