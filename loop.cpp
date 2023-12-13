#include <iostream>
using namespace std;

int main(){

    int n,i;

    cout<<"Enter your number: ";
    cin>>n;

    for(i=1;i<10000;i++){

        cout<<n<<"*"<<i<<"= "<<n*i<<endl;
    }
}