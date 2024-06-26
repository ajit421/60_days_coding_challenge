#include<iostream>
#include<list>
using namespace std;

class HashTable {
    int BUCKET;
    list<int> *table;
public:
    HashTable(int v);
    void insertItem(int x);
    void deleteItem(int key);
    int hashFunction(int x);
    void displayHash();
};
HashTable::HashTable(int b) {
    this->BUCKET = b;
    table = new list<int>[BUCKET];
}
void HashTable::insertItem(int key) {
    int index = hashFunction(key);
    table[index].push_back(key);
}
void HashTable::deleteItem(int key) {
    int index = hashFunction(key);
    list<int>::iterator i;
    for (i = table[index].begin(); i != table[index].end(); ++i) {
        if (*i == key) {
            table[index].erase(i);
            break;
        }
    }
}
int HashTable::hashFunction(int x) {
    return (x % BUCKET);
}
void HashTable::displayHash() {
    for (int i = 0; i < BUCKET; i++) {
        cout << i;
        for (auto x : table[i]) 
            cout << " --> " << x;
        cout << endl;
    }
}

int main() {
    int a[] = {15, 11, 27, 8, 12};
    int n = sizeof(a) / sizeof(a[0]);
    HashTable h(7);
    for (int i = 0; i < n; i++)
        h.insertItem(a[i]);
    h.deleteItem(12);
    h.displayHash();

    return 0;
}
