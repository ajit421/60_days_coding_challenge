#include <iostream>
using namespace std;
#define MAX_SIZE 100 

class Stack {
private:
    int arr[MAX_SIZE];
    int top;

public:
    Stack() {
        top = -1; 
    }
    void push(int value) {
        if (top == MAX_SIZE - 1) {
            cout << "Stack Overflow" << endl;
            return;
        }
        arr[++top] = value;
        cout << value << " pushed onto the stack." << endl;
    }
    int pop() {
        if (top == -1) {
            cout << "Stack Underflow" << endl;
            return -1; 
        }
        int poppedValue = arr[top--];
        cout << poppedValue << " popped from the stack." << endl;
        return poppedValue;
    }
    bool isEmpty() {
        return (top == -1);
    }
    bool isFull() {
        return (top == MAX_SIZE - 1);
    }
};

int main() {
    Stack stack;
    stack.push(10);
    stack.push(20);
    stack.push(30);
    stack.pop();
    stack.pop();
    stack.pop(); 

    return 0;
}
