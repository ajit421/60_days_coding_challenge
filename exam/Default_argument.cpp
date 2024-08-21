#include<iostream>
using namespace std;

int add(int x, int y=5, int z=6){
    cout<<"sum = "<<x+y+z<<endl;

}

int main(){
    add(4);
    add(5,6,9);

}