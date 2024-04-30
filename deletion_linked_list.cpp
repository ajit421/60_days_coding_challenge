#include<iostream>
using namespace std;

class node{
public:
    int data;
    node* next;
    node(int d){
        data = d;
        next = nullptr; // Initialize next to nullptr
    }
};

void insertAtFirstNode(node*& head, int data){
    node* n = new node(data);
    n->next = head;
    head = n;
}

void print(node* head){
    while(head != nullptr){
        cout << head->data << "->";
        head = head->next;
    }
    cout << "nullptr" << endl;
}

void deleteAtFirst(node*& head){
    if(head == nullptr){
        return;
    }
    node* temp = head;
    head = head->next;
    delete temp;
}

int main(){
    node* head = nullptr;
    insertAtFirstNode(head, 1);
    insertAtFirstNode(head, 2);
    insertAtFirstNode(head, 3);
    insertAtFirstNode(head, 4);
    deleteAtFirst(head);
    print(head);

    return 0;
}
