#include <iostream>
using namespace std;

class base {
    public:
    void show(){
        cout<<"base class"<<endl;

    }
};

class drive: public base {
    public :
    void display (){
        cout<<"drive class"<<endl;
    }
};

int main(){
    drive ob;
    ob.display();
    ob.show();
}