#include<iostream>
using namespace std;

class base1 {
    public:
    void display(){
        cout<<"first base class"<<endl;

    }
};
class base2 {
    public:
    void display2(){
        cout<<"second base class"<<endl;

    }
};

class base3 {
    public:
    void display3(){
        cout<<"3rd base class"<<endl;

    }
};

class drive :public base1,public base2, public base3 {
    public:
    void show(){
        cout<<"first base class"<<endl;

    }
};

int main (){
    drive ob;
    ob.show();
    ob.display3();
    ob.display2();
    ob.display();

}

