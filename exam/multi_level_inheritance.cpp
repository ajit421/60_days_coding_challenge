#include <iostream>
using namespace std;

class base1 {
    public:
    void show() {
        cout << "base class" << endl;
    }
};

class drive1 : public base1 {
    public:
    void display1() {
        cout << "Drive1 class" << endl;
    }
};

class drive2 : public drive1 {  
    public:
    void display2() {
        cout << "Drive2 class" << endl;
    }
};

class drive3 : public drive2 {
    public:
    void display3() {
        cout << "Drive3 class" << endl;
    }
};

int main() {
    drive3 ob;
    ob.display3();
    ob.display2();
    ob.display1();
    ob.show();

    return 0;
}
