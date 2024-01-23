#include<iostream>
using namespace std;

int main(){
   

    for(int i=1;i<=10;i++){
        if(i==5){
            break;
        }
        cout<<i<<" ";
        cout<<"\n";
    }

     for(int i=1;i<=10;i++){
        if(i==5){
            continue;
        }
        cout<<i<<" ";
    }

     for(int i=1;i<=10;i++){
        if(i==5){
            goto out;
        }
        
    }
    
out:
cout<<"goto statement:";
    
}
