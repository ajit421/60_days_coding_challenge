#include<iostream>
using namespace std;

int add(int x, int y) {
    int sum = x + y;
    return sum;
}


int main() {
    int a=5,b=6;

    int result = add(a, b);
    cout << "Sum: " << result << endl;

    return 0;
}

