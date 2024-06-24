#include<iostream>
using namespace std;

class calculator{
    public:
    int addition (int num1 , int num2){
        return num1+num2;
    }
     int subtract (int num1 , int num2){
        return num1-num2;
    }
     int multiply (int num1 , int num2){
        return num1*num2;
    }
     int divide (int num1 , int num2){
        return num1/(float)num2;
    }

};

int main(){
    int num1,num2;
    char op;
    calculator calc;
    


    cout <<"Enter first number: ";
    cin>>num1;

    cout<<"Enter operator(+,-,*,/)";
    cin>>op;

    cout <<"Enter second number: ";
    cin>>num2;

    switch (op)
    {
        case '+': cout<<"Result :  "<< calc.addition (num1,num2)<<endl;
        break;
        case '-': cout<<"Result : "<<calc.subtract(num1,num2)<<endl;
        break;
        case '*': cout<<"Result : "<<calc.multiply(num1,num2)<<endl;
        break;
        case '/': cout<<"Result : "<<calc.divide(num1,num2)<<endl;
        break;
    
    default: cerr << "Invalid operator!" << std::endl;
        break;
    }

}