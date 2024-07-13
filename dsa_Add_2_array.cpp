#include<iostream>
using namespace std;

int main(){
    int arr1[]={1,3,5,7,9};
    int arr2[]={2,4,6,8,10};
    int arr3[10];

    int i=0,j=0,k=0;

    while(i<6&&j<6){
        if(arr1[i]<arr2[j]){
            arr3[k]=arr1[i];i++;

        }
        else{
            arr3[k]=arr2[j];j++;
        }
        k++;
    }
    for(int n=0;n<10;n++){
        cout<<arr3[n]<<endl;
    }
}

