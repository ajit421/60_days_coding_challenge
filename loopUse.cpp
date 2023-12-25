#include<iostream>
using namespace std;

int main(){

     int i=1,sum=0,n;
    cout<<"Enter your number: ";
    cin>>n;

   /* while (i<=n){
        sum+=i;
        i++;
    }
    cout<<sum<<endl; */


 /* for( ;i<=n;i++){
    sum+=i;
}
cout<<sum<<endl; */

do{
    sum+=i;
    i++;

}while(i<=n);
cout<<sum<<endl;

}