#include<iostream>
#include<cmath>
using namespace std;

int sqr(int x) {
    return x * x;
}

int main() {
    int n;
    cout << "Enter a natural number: " << endl;
    cin >> n;

    for(int i=1;i<=n;i++){

    int square = sqr(i);
    cout <<  square <<endl;
    }
    return 0; 
}
