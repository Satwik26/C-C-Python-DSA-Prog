#include<iostream>
using namespace std;
int main(){
    int arr[5];
    for (int n=0; n<5; n++){
        cout<<"Enter element no "<<n+1<<": ";
        cin>>arr[n];
    }
    int i;
    try{
        cout<<"Enter index to access elements: ";
        cin>>i;
        if(i>4){
            throw arr[i];
        }else{
            cout<<arr[i];
        }
    }
    catch(int exception){
        cout<<"array is out of bound \n";
    }
    
}