#include<iostream>
using namespace std;

class base {
private:
    int a, b;

public:
    void input() {
        cout << "Enter values: ";
        cin >> a >> b;
    }

    void show() {
        cout << "a= " << a << " " << "b= " << b << endl;
    }

    // Getter function for private member 'a'
    int getA() {
        return a;
    }
};

class derive : public base {
private:
    int m, n;

public:
    void getdata() {
        cout << "Enter values: ";
        cin >> m >> n;
    }

    void display() {
        cout << "a= " <<m<< " " << "b= " << n << endl;
    }
};

int main() {
    base ob;
    derive ob1;

    ob.input();
    ob.show();

    ob1.getdata();
    ob1.display();

    return 0;
}
