#include<iostream>
using namespace std;

int main(){

    int n,m;
    cout<<"Enter row: ";
    cin>>n;

    cout<<"Enter colum: ";
    cin>>m;

    for(int i=1;i<=n;i++){
        for(int j=1;j<=m;j++){
        cout<<"*";
        }
        cout<<endl;
    }

}