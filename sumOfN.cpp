#include<iostream>
using namespace std;

int main (){
    int n,result=0;

    cout<<"Enter N number: ";
    cin>>n;

    for(int i=1;i<=n;i++){
        if(i%2==0){
            result-=i;
        }
        else{
            result+=i;
        }
    }
    cout<<result<<endl;
}