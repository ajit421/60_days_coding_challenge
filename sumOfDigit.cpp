#include<iostream>
using namespace std;

int main(){

    int sum=0,n,lastdigit;

    cout<<"Enter your number: ";
    cin>>n;

   /* while(n>0){
        lastdigit=n%10;
        sum=sum+lastdigit;
        n=n/10;
    } */
    for(;n>0;n/=10){
        lastdigit=n%10;
        sum=sum+lastdigit;
    
}
    cout<<sum<<endl;
}