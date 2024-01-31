#include <iostream>
using namespace std;

class person {
    int age;
    string name;
    string address;

public:
    void input() {
        cout << "Enter your age: ";
        cin >> age;
        cout << "Enter your name: ";
        cin>>name;  
        cout << "Enter your address: ";
        cin>>address;
    }

    void show() {
        cout << "Age: " << age << endl
             << "Name: " << name << endl
             << "Address: " << address << endl;
    }
};

int main() {
    person ajit, vikash, babu;

    cout << "Enter details for Ajit:\n";
    ajit.input();
    cout << "\nDetails for Ajit:\n";
    ajit.show();

    cout << "\nEnter details for Vikash:\n";
    vikash.input();
    cout << "\nDetails for Vikash:\n";
    vikash.show();

    cout << "\nEnter details for Babu:\n";
    babu.input();
    cout << "\nDetails for Babu:\n";
    babu.show();

    return 0;
}
