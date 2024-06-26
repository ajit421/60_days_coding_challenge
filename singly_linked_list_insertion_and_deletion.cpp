#include <iostream>
using namespace std;

class Node {
public:
    int data;
    Node* next;
    Node(int d) : data(d), next(nullptr) {}
};
void insert(Node** head_ref, int new_data) {
    Node* new_node = new Node(new_data);
    new_node->next = *head_ref;
    *head_ref = new_node;
}
void deleteNode(Node** head_ref, int key) {
    Node* temp = *head_ref;
    Node* prev = nullptr;

    if (temp != nullptr && temp->data == key) {
        *head_ref = temp->next;
        delete temp;
        return;
    }
    while (temp != nullptr && temp->data != key) {
        prev = temp;
        temp = temp->next;
    }
    if (temp == nullptr)
        return;
    prev->next = temp->next;
    delete temp;
}
void printList(Node* node) {
    while (node != nullptr) {
        cout << node->data << " ";
        node = node->next;
    }
    cout << endl;
}
int main() {
    Node* head = nullptr;
   insert(&head, 7);
    insert(&head, 1);
    insert(&head, 3);
    insert(&head, 2);
    cout << "Created Linked list: ";
    printList(head);
    deleteNode(&head, 1);
    cout << "Linked list after deletion: ";
    printList(head);

    return 0;
}
