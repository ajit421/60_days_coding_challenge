#include<iostream> 
#define LENGTH 8  
#define WIDTH 16 

using namespace std; 

int main() { int k; 

for(int i=0;i<LENGTH;i++) {
    if(i==0 || i==LENGTH-1) 
    for(int k=0;k<WIDTH;k++) 
    cout<<"S"; 

else{ 
    for(int j=0;j<WIDTH/2-1;j++) 
    cout<<" "; 
    cout<<"SS"; 
    } 
    cout<<endl;
} 
cout<<endl<<endl; 
for(int i=0;i<WIDTH/4;i++) { 
    for(int j=WIDTH/4-1-i;j>0;j--)
    cout<<" "; 

    for(int k=0;k<(i+1)*2;k++) 
    cout<<"H"; 
    for(int l=WIDTH/4-1-i;l>0;l--) 
    cout<<" "; 
    for(int n=WIDTH/4-1-i;n>0;n--) 
    cout<<" "; 
    for(int m=0;m<(i+1)*2;m++) 
    cout<<"E"; 
    cout<<endl; 

} 

for(int i=0;i<WIDTH/2;i++) { 
    for(int j=0;j<i;j++) 
    cout<<" "; 

    for(int k=0;k<WIDTH-2*i;k++) 
    cout<<"I"; 
    cout<<endl; 

} 

cout<<endl<<endl; 
for(int i=0;i<LENGTH;i++){ 
    if(i!=LENGTH-1 && i!=LENGTH-2){ 
    cout<<"NN"; 
    
    for(int j=0;j<WIDTH-4;j++) 
    cout<<" "; 
    cout<<"NN"; 

} 
else 
    for(int k=0;k<WIDTH;k++) 
    cout<<"N";
    cout<<endl; 
}
} 