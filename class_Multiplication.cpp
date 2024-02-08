#include<iostream>
using namespace std;

class A {
    int num,result;
    public:
    void table()
    {
        cout<<"Enter any number....";
        cin>>num;

        for(int i=1;i<=10;i++){
            result=num*i;
            cout<<num<<"*"<<i<<"="<<result<<endl;
        }
    }
};

int main(){
    A obj;
    obj.table();
}