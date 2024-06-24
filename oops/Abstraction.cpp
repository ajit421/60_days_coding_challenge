#include<iostream>
using namespace std;

class car {
    bool startEngine;
public:
    car(): startEngine(false) {}

    void start() {
        startEngine = true;
        cout << "Engine started :)" << endl;
    }

    void drive() {
        if (startEngine) {
            cout << "You are ready to drive :)" << endl;
        }
        else {
            cout << "Can't drive the car. Start the engine first." << endl;
        }
    }
};

int main() {
    car c;
    c.start();
    c.drive();

    return 0;
}
