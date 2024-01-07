#include<iostream>
using namespace std;

int main(){
    int n,ans=0,power=1,paritydigit;

    cout<<"Enter your Decimal number: ";
    cin>>n;

    while(n>0){
        paritydigit=n%2;
        ans=ans+paritydigit*power;
        power=power*10;
        n/=2;
    }
    cout<<ans<<endl;
}