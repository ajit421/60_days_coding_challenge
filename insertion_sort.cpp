#include<iostream>
using namespace std;

int main() {
    int size;
    cout << "Enter size of array: ";
    cin >> size;
    int arr[size];
    
    cout << "Enter array elements: \n";
    for(int i = 0; i < size; i++) {
        cin >> arr[i];
    }
    for(int i = 1; i < size; i++) {
        int key = arr[i];
        int j = i - 1;
        while(j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            j = j - 1;
        }
        arr[j + 1] = key;
    }

    cout << "Sorted array: ";
    for(int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}
