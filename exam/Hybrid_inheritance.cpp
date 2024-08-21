#include<iostream>
using namespace std;

class base {
    public:
    void show() {
        cout << "base class" << endl;
    }
};

class drive1: public base {
    public:
    void display1() {
        cout << "drive1 class" << endl;
    }
};

class drive2: public  base {
    public:
    void display2() {
        cout << "drive2 class" << endl;
    }
};

class drive3 : public drive2, public drive1 {
    public:
    void display3() {
        cout << "drive3 class" << endl;
    }
};

int main() {
    drive3 ob;
    ob.display3();
    ob.display2();
    ob.display1();
    

    drive1 ob1;
    ob1.show();
    ob1.display1();

    return 0;
}
