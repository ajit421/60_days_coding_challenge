#include<iostream>
using namespace std;

int sum(int x, int y){
    int sum = x + y;
    return sum;
}

int sub(int x, int y){
    int sub = x - y;
    return sub;
}

int mul(int x, int y){
    int mul = x * y;
    return mul;
}

int div(int x, int y){
        int div = x / y;
        return div;
   
}


int main (){
    int a = 55, b = 7;
    cout << "Add two numbers: " << sum(a, b) << endl;
    cout << "Subtract two numbers: " << sub(a, b) << endl;
    cout << "Multiply two numbers: " << mul(a, b) << endl;
    cout << "Divide two numbers: " << div(a, b) << endl;
    

    return 0;
}
