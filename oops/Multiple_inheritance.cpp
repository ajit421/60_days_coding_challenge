#include<iostream>
using namespace std;

class base1{
    private:
    int a,b,c;
    public:
    void input(){
        cout<<"Enter the value of base 1 class: ";
        cin>>a>>b;
    }
    void show(){
        c=a+b;
        cout<<"sum= "<<c<<endl;
    }
};


class base2 {
    private:
    int a,b,c;
    public:
    void input1(){
        cout<<"Enter the value of base 2 class: ";
        cin>>a>>b;
    }
    void show1(){
        c=a-b;
        cout<<"subtraction = "<<c<<endl;
    }
};


class drive: public base1,public base2 {
    private:
    int a,b,c;
    public:
    void input2(){
        cout<<"Enter the value of Derive class: ";
        cin>>a>>b;
    }
    void show2(){
        c=a*b;
        cout<<"multiplication= "<<c<<endl;
    }
};


int main(){
    drive ob2;
    ob2.input2();
    ob2.show2();

    ob2.input();
    ob2.show();

    ob2.input1();
    ob2.show1();
}