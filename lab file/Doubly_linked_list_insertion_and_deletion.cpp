#include<iostream>
using namespace std;

class Node {
public:
    int data;
    Node* next;
    Node* prev;
};

void insert(Node** head_ref, int new_data) {
    Node* new_node = new Node();
    new_node->data = new_data;
    new_node->next = *head_ref;
    new_node->prev = NULL;
    if (*head_ref != NULL)
        (*head_ref)->prev = new_node;
    *head_ref = new_node;
}

void deleteNode(Node** head_ref, Node* del) {
    if (*head_ref == NULL || del == NULL)
        return;
    if (*head_ref == del)
        *head_ref = del->next;
    if (del->next != NULL)
        del->next->prev = del->prev;
    if (del->prev != NULL)
        del->prev->next = del->next;
    delete del;
}

void printList(Node* node) {
    while (node != NULL) {
        cout << node->data << " ";
        node = node->next;
    }
}

int main() {
    Node* head = NULL;

    insert(&head, 6);
    insert(&head, 7);
    insert(&head, 1);
    insert(&head, 4);
    cout << "Created DLL: ";
    printList(head);
    deleteNode(&head, head->next);
    cout << "\nDLL after deletion: ";
    printList(head);

    return 0;
}
