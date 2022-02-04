#include<iostream>
#include<math.h>
using namespace std;
float mean(int n, float arr[]){
    float sum=0;
    for(int i=0;i<n;i++){
        sum+=arr[i]; 
    }
    float mea= sum/n;
    return mea;
}
float median(int n,float arr[]){
    float med;
    int mid= n/2;
    if(n%2==0){
        med = (arr[mid]+arr[mid-1])/2.0;
    }else{
        med = arr[n/2];
    }
    return med;
}
float mode(int n,float arr[]){
    int md;
    md = 3 *mean(n,arr) - 2* mean(n,arr);
    return md;
}
int main(){
    int n;
    cout<<"Enter the number of elements: ";
    cin>>n;
    float arr[n];
    for(int i=0;i<n;i++){
        cout<<"Enter "<<i+1<<" element: ";
        cin>>arr[i];
    }
    cout<<"Mean is: "<<mean(n,arr);
    cout<<"\nMedian is: "<<median(n,arr);
    cout<<"\nMode is: "<<mode(n,arr);
}