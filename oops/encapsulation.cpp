#include<iostream>
using namespace std;

class encap{
    int age;
    void show (){
        cout<<"Ajit"<<endl;
    }

    public:
    string name;
    void setvalue(int a){
        show ();
        age=a;
        cout<<age<<endl;
    }
};

int main(){
    encap E;
    E.name="Ajit";
    E.setvalue(23);
    cout<<E.name;
}