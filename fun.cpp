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

int divya(int x, int y){
    if(y==0)
    {
        cout<<" Sorry!, divide by zero";
        exit(1);
    }
        int div = x / y;
        return div;
   
}


int main (){
    int a = 55, b = 7;
    cout << "Add two numbers: " << sum(a, b) << endl;
    cout << "Subtract two numbers: " << sub(a, b) << endl;
    cout << "Multiply two numbers: " << mul(a, b) << endl;
    cout << "Divide two numbers: " << divya(a, b) << endl;
    

    return 0;
}
