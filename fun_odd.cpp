#include <iostream>
using namespace std;

bool isodd(int x){
    if(x%2==0){
    return false;
    }
    
    else
    return true;
}

int main(){

    int a=5, b=15;

    for(int i=a;i<=b;i++){
    if(isodd(i)){
        cout<<i<<" ";
    }
    }

}
