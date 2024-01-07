#include <iostream>
using namespace std;

int main() {
    
    int n,ans=0,power=1;
    cout<<"Enter your decimal number: ";
    cin>>n;
    
    while (n>0){
        int lastdigit=n%10;
        ans +=lastdigit*power;
        power*=2;
        n/=10;
    }
    cout<<ans<<endl;

    return 0;
}