#include <iostream>
using namespace std;

class node {
public:
    int data;
    node* next;

    node(int val) {
        data = val;
        next = nullptr;
    }
};

class Linkedlist {
private:
    node* head;

public:
    Linkedlist() {
        head = nullptr;
    }

    void insert(int val) {
        node* newnode = new node(val);
        newnode->next = head;
        head = newnode;
    }

    void display() {
        node* temp = head;
        while (temp != nullptr) {
            cout << temp->data << " -> ";
            temp = temp->next;
        }
        cout << "nullptr" << endl;
    }

    ~Linkedlist() {
        node* temp = head;
        while (temp != nullptr) {
            node* nextNode = temp->next;
            delete temp;
            temp = nextNode;
        }
    }
};

int main() {
    Linkedlist mylink;

    mylink.insert(5);
    mylink.insert(10);
    mylink.insert(15);
    mylink.insert(144);
    mylink.insert(2);

    cout << "Linked list: ";
    mylink.display();

    return 0;
}
