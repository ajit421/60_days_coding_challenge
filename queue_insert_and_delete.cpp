#include <iostream>
using namespace std;

#define MAX 1000

class Queue {
public:
    int arr[MAX];
    int front, rear;
    
    Queue() { front = rear = -1; }  
    
    void enqueue(int x);
    int dequeue();
    bool isEmpty();
};

void Queue::enqueue(int x) {
    if (rear == MAX - 1) {  
        cout << "Queue Overflow\n";
    } else {
        if (front == -1) front = 0;  
        arr[++rear] = x;
        cout << x << " enqueued into queue\n";  
    }
}

int Queue::dequeue() {
    if (front == -1 || front > rear) {  
        cout << "Queue Underflow\n";
        return 0;
    } else {
        int x = arr[front++];
        if (front > rear) front = rear = -1; 
        return x;
    }
}

bool Queue::isEmpty() {
    return (front == -1);
}

int main() {
    Queue q;
    q.enqueue(10);
    q.enqueue(20);
    q.enqueue(30);
    cout << q.dequeue() << " dequeued from queue\n";
    return 0;
}
