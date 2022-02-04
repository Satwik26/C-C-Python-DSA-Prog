#include<iostream>
using namespace std;
int main(){
    int arr[10];
    for(int i=0;i<10;i++){
        cout<<"Enter "<<i+1<<" elements: ";
        cin>>arr[i];
    }
    try{
        for(int i=0;i<10;i++){
            if(arr[i]<0){
                throw arr[i];
            }
        }
    }
    catch (int e){
        cout<<"Negetive input not allowed \n";
        for(int i=0;i<10;i++){
            if(arr[i]<0){
                arr[i]*=-1;
            }
            cout<<arr[i]<<endl;
        }
    }
}