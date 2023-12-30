#include <iostream>
using namespace std;
int main (){
  double x,y,BMI,f;
  
 
  cout<<"Please enter your weight =";
  cin>>x;
  cout<<"Please enter your height =";
  cin>>y;
  f = y*y;
  BMI = x/f;
  cout<< "Your BMI is ="<< BMI;
  }