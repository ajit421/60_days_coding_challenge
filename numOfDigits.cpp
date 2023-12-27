#include<iostream>
using namespace std;

int main(){
    int n;
    cin >> n; 

    int digits = 0; 

    // for loop to count the number of digits
   /* for (digits = 0; n > 0; digits++) {
        n = n / 10;
    } */

    //for while loop to count the number of digits
    while(n > 0){
        digits++;
        n = n / 10;
    }

    cout << digits << endl;  
    return 0;  
}
