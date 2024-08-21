#include <iostream>
using namespace std;

class base{ 
    public:
    void show(){
        cout<<"base class"<<endl;
    }
};

class drive1 : public base{
    public:
    void display(){
        cout<<"drive class 1"<<endl;
    }
};

class drive2: public base{
    public:
    void display2(){
        cout<<"drive class 2"<<endl;
    }
};

class drive3: public base{
    public:
    void display3(){
        cout<<"drive class 3"<<endl;
    }
};

int main(){
    drive3 ob;
    ob.display3();
    ob.show();

    drive2 ob2;
    ob2.display2();
    ob.show();

    drive1 ob1;
    ob1.display();
    ob1.show();
}

